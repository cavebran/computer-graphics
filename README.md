<div id="top"></div>

# Computação Gráfica

<!---Shields em: https://shields.io --->

![GitHub repo size](https://img.shields.io/github/repo-size/cavebran/computer-graphics?style=for-the-badge&label=tamanho%20do%20repo&color=red)
![GitHub contributors](https://img.shields.io/github/contributors/cavebran/computer-graphics?style=for-the-badge&label=colaboradores&color=red)
![GitHub stars](https://img.shields.io/github/stars/cavebran/computer-graphics?style=for-the-badge&label=estrelas&color=red)

<!-- LOGO -->
<br />
<div align="center">
  <a href="https://github.com/cavebran/cg-atividade-1">
    <img src="https://noticiasetecnologia.com/wp-content/uploads/2019/03/Ray-Tracing-logo-1140x641.jpg" alt="Logo" width="285" height="160">
  </a>
</div>

## 📜 Propósito do repositório

Este repositório é dedicado ao armazenamento de atividades relacionadas à disciplina de Computação Gráfica. O principal objetivo desta disciplina é proporcionar uma compreensão abrangente das técnicas de computação gráfica, com um foco especial no funcionamento do método de ray tracing. A princípio a linguagem principal a ser utilizada em todas as atividades é C++, juntamente com bibliotecas já existentes e bibliotecas que serão criadas ao longo da disciplina.

## ⚙️ Ferramentas utilizadas no desenvolvimento

Links úteis para o desenvolvimento do projeto:
* [C++](https://devdocs.io/cpp/)
* [CMake](https://cmake.org/)
* [Doxygen](https://www.doxygen.nl/manual/index.html)
* [Google Test](https://github.com/google/googletest)
* [Bash Script](https://devdocs.io/bash/)
* [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html)

<p align="right"><a href="#top">↑</a></p>

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Certifique-se de ter a ferramenta auxiliar de compilação [**CMake**](https://cmake.org/).
- Um compilador para C++.

### Como compilar:
Atualmente só é possível compilar todas as atividades de uma vez.

**&#8594; Para compilar:**  Em seu terminal, entre no diretório raiz `'/'` do projeto e então utilize o [*Bash Script*](https://devdocs.io/bash/) **`bran.sh`** com o comando: 
```shell
sh bran.sh build
```

OU

```shell
./bran.sh build
```

**Observação:** os arquivos binários de execução da pasta **main** (independente de qual atividade), quando compilados ficam armazenados com um nome diferente do arquivo de implementação *.cpp*. Seu nome segue o padrão `'<activity-n>_<nome_do_arquivo.cpp>'`. Isso é necessário para evitar conflitos de nomes de arquivos quando é realizado o processo de *link* dos *headers* e *sources* das *libs*. Porém ao utilizar os comandos de `run` ou `test`, não é necessário se atentar a este detalhe, só passe o nome do arquivo que deseja executar ou testar, sem a extensão de arquivo. Por exemplo: <br/>
- Atividade em que o arquivo se encontra: `activity-1`
- Arquivo fonte que é usado para compilar: `colombia.cpp`
- Arquivo binário gerado ao compilar: `activity-1_colombia`

Ao executar o comando `run` ou `test`, passe apenas o nome do arquivo fonte usado para compilar sem o *.cpp*. Mais detalhes a frente na documentação.

**&#8594; Os binários gerados ficam localizados em:** `'/.build/'`

> `.build/` é um diretório criado automaticamente pelo sucesso do processo de build através do *Bash Script* **`bran.sh`**, sempre no diretório raiz `'/'` do projeto.
<hr>

### Como executar uma atividade:
Existem duas opções ao executar uma atividade, através do *Bash Script* **`bran.sh`**, ou executando diretamente os binários gerados.

**&#8594; Método tradicional:** Chame o mecanismo padrão de execução do Linux, apontando o caminho para o arquivo binário compilado. Exemplo:

```shell
./build/activity-1/main/activity-1_colombia
```

**&#8594; Utilizando *Bash Script*:** Em seu terminal, no diretório raiz `'/'` do projeto, execute o comando descrito a seguir. Troque `[activity_name]` pela atividade que será compilada - *`exemplo:`* **`activity-1`** e `[activity_main]` pelo arquivo binário de execução - *`exemplo:`* **`colombia`**. 
```shell
sh bran.sh run <activity_name> <activity_main>
```

### Como testar uma atividade:
Algumas atividades possuirão testes unitários, para rodar os testes, basta utilizar o *Bash Script* **`bran.sh`**. Existem duas opções de testes, teste diretamente em um arquivo de teste específico de determinada atividade e teste para todos os arquivos de testes de uma atividade, respectivamente:
```shell
sh bran.sh test <activity_name> <activity_test>
```

OU

```shell
sh bran.sh test <activity_name>
```

### Maiores informações sobre o *Bash Script* **`bran.sh`**:
- Todos os comandos só funcionarão se o diretório atual do terminal for o diretório raiz `'/'` do projeto.
- Para visualizar todos os comandos, suas utilidades e como usá-los, use o comando:
	```shell
		sh bran.sh help
	```

## 📎Guias e referências extras utilizadas
CMake Project Structure Reference: 
- [CMake Tutorial - Youtube Playlist](https://www.youtube.com/watch?v=nlKcXPUJGwA&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4)
- [GTest and CMake - Youtube Video Guide](https://www.youtube.com/watch?v=Lp1ifh9TuFI)
- [Google Test for C++](https://google.github.io/googletest/)
<hr>

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/cavebran">
        <img src="https://avatars.githubusercontent.com/u/50341294?v=4" width="100px;" alt="Brante"/><br>
        <sub>
          <b>Guilherme Brante</b>
        </sub>
      </a>
    </td>
  </tr>
</table>

<p align="right"><a href="#top">↑</a></p>
