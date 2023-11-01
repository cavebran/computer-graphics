#!/bin/bash

# Função para exibir a ajuda
help() {
    echo "Uso: ./bran.sh <comando>"
		echo ""
    echo "Comandos disponíveis:"
    echo "  build                              - Cria a pasta .build, executa o cmake e faz o build com make."
    echo "  clear                              - Remove o conteúdo da pasta .build."
		echo "  cbuild                             - Executa o clear e em seguida o build"
    echo "  run <nome_da_atividade> <arquivo>  - Executa o arquivo especificado na atividade."
		echo "  test <nome_da_atividade>           - Executa todos os testes especificado na atividade."
		echo "  test <nome_da_atividade> <arquivo> - Executa o teste especificado na atividade."
    echo "  help                               - Exibe esta mensagem de ajuda."
}

# Função para realizar o build
build() {
		echo "Iniciando processo de Build..."

    mkdir -p .build
    cd .build || exit 1
    cmake ..
    make
    cd ..

		echo "Build executado com sucesso!"
}

# Função para limpar o conteúdo da pasta .build
clear() {
    rm -rf .build
}

run_activity_file() {
		echo ".build/$1/main/$1_$2"
    if [ -f ".build/$1/main/$1_$2" ]; then
        .build/$1/main/$1_$2
				echo "Arquivo executado!"
    else
        echo "Arquivo não encontrado."
				build
				echo "\033c"
        if [ -f ".build/$1/main/$1_$2" ]; then
            .build/$1/main/$1_$2
						echo "Arquivo executado!"
        else
            echo "Arquivo não encontrado!"
						echo "Certifique-se que o nome da atividade ou do arquivo binário estão corretos."
            exit 1
        fi
    fi
}

run_test_file() {
    if [ -f ".build/$1/tests/$1_$2" ]; then
        .build/$1/tests/$1_$2
        echo "Teste executado!"
    else
        echo "Arquivo de teste não encontrado."
        build
        echo "\033c"
        if [ -f ".build/$1/tests/$1_$2" ]; then
            .build/$1/tests/$1_$2
            echo "Teste executado!"
        else
            echo "Arquivo de teste não encontrado!"
            echo "Certifique-se que o nome da atividade ou do arquivo de teste estão corretos."
            exit 1
        fi
    fi
}

run_all_tests() {
		build
		echo "\033c"
    if [ -d ".build/$1/tests" ]; then
        for test_file in .build/$1/tests/*_test*; do
            ./$test_file
            echo "Teste executado: $test_file"
        done
    else
        echo "Nenhum teste encontrado para $1"
        exit 1
    fi
}

# Verifica os argumentos passados
if [ $# -eq 0 ]; then
    help
    exit 1
fi

# Executa as ações conforme o comando recebido
case "$1" in
    "build")
        build
        ;;
    "clear")
        clear
        ;;
		"cbuild")
			clear
			build
			;;
    "run")
        if [ $# -ne 3 ]; then
            echo "Uso: ./bran.sh run <nome_da_atividade> <arquivo_binário>"
            exit 1
        fi
        run_activity_file $2 $3
        ;;
    "test")
        if [ $# -eq 3 ]; then
            run_test_file $2 $3
        elif [ $# -eq 2 ]; then
            run_all_tests $2
        else
            echo "Uso: ./build_script.sh test <nome_da_atividade> [<arquivo_de_teste>]"
            exit 1
        fi
        ;;
    "help")
        help
        ;;
    *)
        echo "Comando inválido."
        help
        exit 1
        ;;
esac
