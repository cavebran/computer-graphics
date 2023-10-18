<div id="top"></div>

# Computação Gráfica

<!---Shields em: https://shields.io --->

![GitHub repo size](https://img.shields.io/github/repo-size/cavebran/cg-atividade-1?style=for-the-badge&label=tamanho%20do%20repo&color=red)
![GitHub contributors](https://img.shields.io/github/contributors/cavebran/cg-atividade-1?style=for-the-badge&label=colaboradores&color=red)
![GitHub stars](https://img.shields.io/github/stars/cavebran/cg-atividade-1?style=for-the-badge&label=estrelas&color=red)

<!-- LOGO -->
<br />
<div align="center">
  <a href="https://github.com/cavebran/cg-atividade-1">
    <img src="https://www.flagcolorcodes.com/data/flag-of-france.png" alt="Logo" width="100" height="66">
    <img src=https://www.flagcolorcodes.com/data/Flag-of-England.png" alt="Logo" width="100" height="66">
    <img src="https://www.flagcolorcodes.com/data/flag-of-colombia.png" alt="Logo" width="100" height="66">
  </a>

  <h3 align="center">Computação Gráfica - Atividade 1</h3>
</div>
<br />
<br />

## 📜 Exercício de Computação Gráfica - Geração de Imagens PPM 🖌️🌈

Este repositório contém um exercício prático da disciplina de Computação Gráfica, no qual exploramos a criação de imagens básicas no formato PPM (Portable Pixmap). O objetivo desse exercício é entender os princípios fundamentais de geração de imagens raster, aprendendo a criar imagens simples com cores e formas. 🖼️💡
O programa em C++ foi feito com tema de bandeiras. No momento, oferecemos suporte para as bandeiras da França, Inglaterra e Colômbia.

## ⚙️ Desenvolvido com

Links úteis para o desenvolvimento do projeto:
* [C++](https://devdocs.io/cpp/)
* [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html)

<p align="right"><a href="#top">↑</a></p>

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Certifique-se de ter o compilador g++ instalado em seu sistema. Você pode encontrar instruções de instalação na documentação do [g++](https://gcc.gnu.org/onlinedocs/).
- Certifique-se de estar no diretório raiz para que este comando funcione corretamente

### Compilando
- Para compilar, troque `[nome_da_bandeira]` pelo nome da bandeira de sua escolha, como `colombia` por exemplo.
```shell
g++ -o src/[nome_da_bandeira]/[nome_da_bandeira] lib/src/Image.cpp lib/src/Pixel.cpp src/[nome_da_bandeira]/[nome_da_bandeira].cpp
```

### Executando
- Para executar, troque `[nome_da_bandeira]` pelo nome da bandeira de sua escolha, como `colombia` por exemplo.
```shell
./src/[nome_da_bandeira]/[nome_da_bandeira] > ./src/[nome_da_bandeira]/[nome_da_bandeira].ppm
```
- O redirecionamento da saída `> ./src/[nome_da_bandeira]/[nome_da_bandeira].ppm` permite que a imagem gerada seja salva em um arquivo .ppm com o mesmo nome da bandeira, porém a saída é livre para personalizações de nome e outros.

### Converter PPM para JPG
- Para que possa ser possível visualizar a imagem graficamente, foi utilizado um website ([PPM Viewer](https://www.cs.rhodes.edu/welshc/COMP141_F16/ppmReader.html)) que faz a conversão de .ppm para .jpg.

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
