# 📘 Atividade de Conceitos Básicos em Linguagem C

Projeto desenvolvido em **Linguagem C** com o objetivo de praticar conceitos fundamentais de programação estruturada por meio de um sistema em modo console com menu interativo.

O programa reúne diversos exercícios clássicos de lógica de programação, permitindo ao usuário executar operações matemáticas, cálculos acadêmicos, manipulação de vetores, strings, matrizes, recursividade e pequenos jogos.

---

## 📌 Sobre o Projeto

Este projeto consiste em um programa de console com **36 opções de menu**, sendo 35 funcionalidades principais e uma opção para encerramento.

A aplicação foi criada para centralizar diferentes exercícios básicos em um único sistema, facilitando a prática de estruturas fundamentais da linguagem C, como condicionais, laços de repetição, vetores, matrizes, strings, funções e recursividade.

---

## 🎯 Objetivo

O principal objetivo do projeto é praticar e consolidar os principais conceitos da programação estruturada em C, incluindo:

- Entrada e saída de dados com `scanf` e `printf`
- Estruturas condicionais com `if`, `else if` e `else`
- Estrutura de seleção com `switch case`
- Estruturas de repetição com `for`, `while` e `do while`
- Manipulação de vetores
- Manipulação de matrizes
- Manipulação de strings
- Criação e chamada de funções
- Uso de funções recursivas
- Geração de números aleatórios
- Uso de bibliotecas padrão da linguagem C

---

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Console/terminal
- Bibliotecas utilizadas:
  - `stdio.h`
  - `stdlib.h`
  - `time.h`
  - `math.h`
  - `string.h`

---

## ⚙️ Funcionalidades

O sistema possui um menu interativo com as seguintes opções:

### 📊 Cálculos Acadêmicos

- Cálculo de média semestral no estilo Fatec utilizando `if`
- Cálculo de média semestral utilizando `if`, `else if` e `else`
- Verificação de aprovação, recuperação ou reprovação
- Cálculo de média final com prova de recuperação

### 💰 Operações Comerciais

- Aplicação de desconto em produto utilizando `if/else`
- Aplicação de desconto em produto utilizando `switch case`
- Opções de desconto de 5%, 8%, 15% e 25%

### 🔢 Matemática Básica

- Cálculo de fatorial com `do while`
- Cálculo de fatorial com `while`
- Cálculo de fatorial com `for`
- Sequência de Fibonacci com `do while`
- Sequência de Fibonacci com `while`
- Sequência de Fibonacci com `for`
- Progressão Aritmética com `do while`
- Progressão Aritmética com `while`
- Progressão Aritmética com `for`

### 📋 Manipulação de Vetores

- Encontrar o maior número de uma lista
- Encontrar o menor número de uma lista
- Exibir valores em ordem inversa
- Multiplicar os valores de uma lista por um número informado
- Aplicar exponenciação em uma lista de valores
- Calcular raiz quadrada de valores armazenados em lista

### 🔤 Manipulação de Strings

- Comparar duas strings
- Verificar se uma palavra é palíndromo
- Verificar se uma frase é palíndromo
- Converter texto para maiúsculo
- Converter texto para minúsculo
- Concatenar duas strings
- Exibir uma lista de nomes em letras maiúsculas

### 🔢 Matrizes

- Multiplicar uma matriz por um número escalar
- Somar duas matrizes
- Subtrair duas matrizes
- Multiplicar duas matrizes elemento a elemento

### 🎮 Jogos e Simulações

- Simulação de cara ou coroa
- Jogo de cartas 21

### 🔁 Recursividade

- Cálculo de fatorial com função recursiva
- Sequência de Fibonacci com função recursiva
- Progressão Aritmética com função recursiva

### 🧹 Utilidades

- Limpeza de tela durante a navegação
- Encerramento do programa pelo menu

---

## 🖥️ Como Executar

### Pré-requisitos

Para compilar e executar o projeto, é necessário ter um compilador C instalado.

Recomendado:

- GCC
- MinGW, caso esteja utilizando Windows

---

### Compilação

No terminal, acesse a pasta onde está o arquivo principal do projeto e execute:

gcc main.c -o programa -lm
O parâmetro -lm pode ser necessário em alguns ambientes por causa do uso da biblioteca math.h, utilizada em funções como pow() e sqrt().

Execução
Windows
programa.exe
ou

./programa.exe
Linux/macOS
./programa

## 📚 Estrutura do Código
O programa é organizado da seguinte forma:

Funções separadas para cada opção do menu
Função main() responsável pelo controle principal do programa
Estrutura while para manter o menu ativo até o usuário escolher sair
Estrutura switch case para direcionar a opção escolhida
Uso de arrays para vetores, strings e matrizes
Uso de funções recursivas em exercícios específicos

## 📋 Menu de Opções
O menu principal contém as seguintes opções:
---
1) Média Fatec (If)
2) Média Fatec (if/else/else if)
3) Ajuste de Preço (if/else/else if)
4) Ajuste de Preço (Switch case)
5) Fatorial (do/while)
6) Fibonacci (do/while)
7) P.A (do while)
8) Fatorial (while)
9) Fibonacci (while)
10) P.A (while)
11) Fatorial (for)
12) Fibonacci (for)
13) P.A (for)
14) Encontrar o maior número
15) Encontrar o menor número
16) Ler valores e imprimir em ordem inversa
17) Multiplicar valores de uma lista
18) Lista de valores com exponenciação
19) Lista de valores com raiz quadrada
20) Comparar strings
21) Identificar palíndromo
22) Identificar palíndromo em frases
23) Passar string para maiúsculo
24) Passar string para minúsculo
25) Concatenar duas strings
26) Conjunto de nomes em maiúsculo
27) Multiplicar matriz por escalar
28) Somar duas matrizes
29) Subtrair duas matrizes
30) Multiplicar duas matrizes
31) Cara ou Coroa
32) Jogo de cartas 21
33) Fatorial com recursividade
34) Fibonacci com recursividade
35) P.A com recursividade
36) Sair
---

## 🚀 Aprendizados Desenvolvidos
Durante o desenvolvimento deste projeto, foram praticados conceitos importantes como:

Organização de um programa em funções
Controle de fluxo com estruturas condicionais
Criação de menus interativos
Repetição de tarefas com laços
Armazenamento e manipulação de dados em arrays
Processamento de strings sem depender totalmente de funções prontas
Operações com matrizes
Implementação de funções recursivas
Simulação de eventos aleatórios com rand() e srand()

## ⚠️ Observações Técnicas
Alguns pontos importantes sobre o código:

O comando system("cls") é específico para Windows.
O comando system("pause") também é específico para Windows.
A função strupr() não faz parte do padrão ANSI C e pode não funcionar em todos os compiladores.
O uso de fflush(stdin) não é recomendado pelo padrão da linguagem C, pois seu comportamento pode variar entre compiladores.
Algumas funções ainda podem ser melhoradas com validações adicionais de entrada.
O projeto tem foco educacional e foi desenvolvido para prática dos conceitos básicos da linguagem.

## 🧩 Possíveis Melhorias
Algumas melhorias futuras que podem ser aplicadas ao projeto:

Corrigir incompatibilidades com compiladores diferentes
Substituir strupr() por uma função própria de conversão para maiúsculo
Remover o uso de fflush(stdin)
Melhorar a validação de entradas do usuário
Corrigir chamadas incorretas no menu, se necessário
Modularizar o projeto em arquivos .c e .h
Criar constantes para tamanhos de vetores e matrizes
Melhorar a organização visual do menu
Adicionar comentários explicativos em partes estratégicas do código
Adaptar o projeto para funcionar melhor em Linux e macOS

## 📄 Licença
Este projeto foi desenvolvido com fins educacionais para prática de conceitos básicos da linguagem C.

## 👨‍💻 Autor
Desenvolvido por João Pedro Alcântara.

LinkedIn: www.linkedin.com/in/joaopedroalcantara-dev
