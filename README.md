<h3 align="center">42 São Paulo - ft_get_next_line</h3>

<div align="center">

[![norminette](https://github.com/librity/ft_get_next_line/actions/workflows/norminette.yml/badge.svg)](https://github.com/librity/ft_get_next_line/actions/workflows/norminette.yml)
![42 São Paulo](https://img.shields.io/badge/42-SP-1E2952)
![License](https://img.shields.io/github/license/librity/ft_get_next_line?color=yellow)
![Code size in bytes](https://img.shields.io/github/languages/code-size/librity/ft_get_next_line?color=blue)
![Lines of code](https://img.shields.io/tokei/lines/github/librity/ft_get_next_line?color=blueviolet)
![Top language](https://img.shields.io/github/languages/top/librity/ft_get_next_line?color=ff69b4)
![Last commit](https://img.shields.io/github/last-commit/librity/ft_get_next_line?color=orange)

</div>

<p align="center"> A function that reads a file line-by-line.
  <br>
</p>

---

## 📜 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Github Actions](#github_actions)
- [42 São Paulo](#ft_sp)

## 🧐 About <a name = "about"></a>

What can I say that
[@harm-smits](https://harm-smits.github.io/42docs/projects/get_next_line)
hasn't said already?

`get_next_line` is a function that reads an entire line
from a file indexed by a file descriptor `fd`.
It then alocates a string with the contents
of that line without the linebreak `'\n'` and points `line` to it.

We don't have to pass anything allocated to `get_next_line`,
we just pass the address of a pointer that will point to the allocated string.
`line` should be freeable with `free()` after the function call
unless an error occured.

We will incrementally read the file with `read()`,
which advances its position in the file dexample escriptor automatically.

We need to use a static pointer as a read buffer
to access what was read in previous calls.

We need to handle the following situations:

1. If the read buffer doesn't have a `'\n'`, we concatenate
   with the previous buffer and call read again.
2. If the read buffer has a `'\n'`,
   we concatenate with the previous buffer up to `'\n'`.
3. If we reach the end of the file (`read() == 0`),
   we concatenate with the previous buffer.
4. We finally point `line` to an allocated string
   that contains the entire line without the `'\n'`.
   Then we release the memory allocated in the intermediate strings
   and return `1` or `0` for `'\n'` and `end_of_file` respectively.
5. If the parameters have any problems (`BUFFER_SIZE <= 0`),
   or if in any operation we were unable to allocate memory,
   we free whatever memory was allocated and return -1.

### pt-br

Tem essa documentacao bem legal do
[@harm-smits](https://harm-smits.github.io/42docs/projects/get_next_line).

O `get_next_line` lê uma linha inteira do arquivo indexado por `fd`,
e faz o ponterio `line` apontar para uma string allocada
com os conteudos dessa linha sem a quebra de linha `'\n'`.

Nao temos que passar nada allocado para o get_next_line,
apenas passar o endereco de um ponteiro que vai apontar para a string allocada.
Precisamos poder dar `free()` nessa string allocada depois da chamada.

A gente vai ler o arquivo com a funcao `read()`,
que avanca a sua posicao no file descriptor automaticamente.

A gente precisa usar um ponteiro estatico como buffer do read
para poder acessar o que foi lido pelo read nas chamadas anteriores.

Precisamos tratar as seguintes situacoes:

1. Se o buffer lido nao tem `'\n'`,
   concatenamos com o buffer anterior e chamamos read novamente.
2. Se o buffer lido tem `'\n'`,
   concatenamos com o buffer anterior ate o `'\n'`.
3. Se chegamos no final do arquivo (`read() = 0`),
   concatenamos com o buffer anterior.
4. Finalmente temos que apontar o ponteiro line passado
   para uma string allocada que contenha a linha inteira sem o `'\n'`.
   Depois liberamos a memoria allocada nas strings intermediarias
   e retornamos 1 ou 0 para '\n' ou final do arquivo respectivamente.
5. Se os parametros tem algum problema (`BUFFER_SIZE <= 0`),
   ou em alguma dessas operacaoes nao conseguimos allocar memoria,
   liberamos toda a memoria allocada e retornamos -1.

## 🏁 Getting Started <a name = "getting_started"></a>

### ⚙️ Prerequisites

All you need is a shell and a C compiler like `gcc` or `clang`.

### 🖥️ Installing

To compile the entire thing just clone the repo and run `make`
with a positive `BUFFER_SIZE`:

```bash
$ git clone https://github.com/librity/ft_get_next_line.git
$ cd ft_get_next_line
$ make d="'BUFFER_SIZE=42'"
```

This will generate a `get_next_line.a` archive, which you can compile with
the example file:

```bash
$ gcc -g -D BUFFER_SIZE=42 -I ./includes ./examples/example.c get_next_line.a
$ ./a.out
```

## 🐙 Github Actions <a name = "github_actions"></a>

[Norminette Github Action](https://github.com/AdrianWR/libft/blob/master/.github/workflows/norminette.yaml)
by [@AdrianWR](https://github.com/AdrianWR)

## 🛸 42 São Paulo <a name = "ft_sp"></a>

Part of the larger [42 Network](https://www.42.fr/42-network/),
[42 São Paulo](https://www.42sp.org.br/) is a software engineering school
that offers a healthy alternative to traditional education:

- It doesn't have any teachers and classes.
- Students learn by cooperating
  and correcting each other's work (peer-to-peer learning).
- Its focus is as much on social skills as it is on technical skills.
- It's completely free to anyone that passes its selection process -
  [**The Piscine**](https://42.fr/en/admissions/42-piscine/)

It's an amazing school, and I'm grateful for the opportunity.
