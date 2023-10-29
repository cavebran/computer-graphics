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
* [Bazel](https://bazel.build/)
* [Doxygen](https://www.doxygen.nl/manual/index.html)
* [Google Test](https://github.com/google/googletest)
* [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html)

<p align="right"><a href="#top">↑</a></p>

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Certifique-se de ter a ferramenta auxiliar de compilação [**Bazel**](https://bazel.build/), instalada em seu ambiente de desenvolvimento. Versão utilizada no projeto - **6.3.2**.

### Como compilar uma atividade:
**&#8594; Para compilar:**  Em seu terminal execute o comando descrito a seguir. Troque `[activity_name]` pela atividade que será compilada (*exemplo:* `activity-1`) e `[activity_main]` pelo arquivo principal de execução (*exemplo:* `colombia`). 
```shell
bazel build [activity_name]/src/main:[activity_main]
```

**&#8594; O binário gerado fica localizado em:** <br/>
`bazel-bin/[activity_name]/src/main/[activity_main]`

> `bazel-bin` é um diretório criado automaticamente pela sucesso da execução do comando `bazel build` ou `bazel run`.
<hr>

### Como executar uma atividade:
Existem duas opções ao executar uma atividade, direto pelo bazel, ou utilizando o binário gerado através do comando `bazel build` descrito no tópico de *"Como compilar uma atividade"*.

**&#8594; Método tradicional:** Chame o mecanismo padrão de execução do Linux, apontando o caminho para o arquivo binário compilado.

**&#8594; Utilizando Bazel:** Em seu terminal execute o comando descrito a seguir. Troque `[activity_name]` pela atividade que será compilada (*exemplo:* `activity-1`) e `[activity_main]` pelo arquivo principal de execução (*exemplo:* `colombia`). 
```shell
bazel run [activity_name]/src/main:[activity_main]
```

## 📎Guias e referências extras
Bazel Project Structure Reference: 
- [Github Bazel Template (C++)](https://github.com/ourarash/cpp-template)
- [GTest, GLog, Starter Bazel Repo Youtube Video Guide](https://www.youtube.com/watch?v=JfOzsBi_irY&ab_channel=arisaif)
- [Bazel Template (C++) Youtube Video Guide](https://www.youtube.com/watch?v=kLLDzLWzuag&ab_channel=arisaif)
- [How to Debug in VSCode with Bazel (C++)](https://www.youtube.com/watch?v=-TUogVOs1Qg&ab_channel=arisaif)
- [Google Test for C++ using Bazel](https://google.github.io/googletest/quickstart-bazel.html)


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
