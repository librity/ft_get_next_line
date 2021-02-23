# ft_get_next_line

42 Sao Paulo's main cursus project - Get Next Line

## About

What can I say that [@harm-smits](https://harm-smits.github.io/42docs/projects/get_next_line) hasn't said already?

`get_next_line` is a function that reads an entire line from a file indexed by a file descriptor `fd`. It then alocates a string with the contents of that line without the linebreak `'\n'` and points `line` to it.

We don't have to pass anything allocated to `get_next_line`, we just pass the address of a pointer that will point to the allocated string. `line` should be freeable with `free()` after the function call unless an error occured.

We will incrementally read the file with `read()`, which advances its position in the file descriptor automatically.

We need to use a static pointer as a read buffer to access what was read in previous calls.

We need to handle the following situations:

1. If the read buffer doesn't have a `'\n'`, we concatenate with the previous buffer and call read again.
2. If the read buffer has a `'\n'`, we concatenate with the previous buffer up to `'\n'`.
3. If we reach the end of the file (`read() == 0`), we concatenate with the previous buffer.
4. We finally point `line` to an allocated string that contains the entire line without the `'\n'`. Then we release the memory allocated in the intermediate strings and return `1` or `0` for `'\n'` and `end_of_file` respectively.
5. If the parameters have any problems (`BUFFER_SIZE <= 0`), or if in any operation we were unable to allocate memory, we free whatever memory was allocated and return -1.

## About pt-BR

Tem essa documentacao bem legal do [@harm-smits](https://harm-smits.github.io/42docs/projects/get_next_line).

O `get_next_line` lê uma linha inteira do arquivo indexado por `fd`, e faz o ponterio `line` apontar para uma string allocada com os conteudos dessa linha sem a quebra de linha `'\n'`.

Nao temos que passar nada allocado para o get_next_line, apenas passar o endereco de um ponteiro que vai apontar para a string allocada.
Precisamos poder dar `free()` nessa string allocada depois da chamada.

A gente vai ler o arquivo com a funcao `read()`, que avanca a sua posicao no file descriptor automaticamente.

A gente precisa usar um ponteiro estatico como buffer do read para poder acessar o que foi lido pelo read nas chamadas anteriores.

Precisamos tratar as seguintes situacoes:

1. Se o buffer lido nao tem `'\n'`, concatenamos com o buffer anterior e chamamos read novamente.
2. Se o buffer lido tem `'\n'`, concatenamos com o buffer anterior ate o `'\n'`.
3. Se chegamos no final do arquivo (`read() = 0`), concatenamos com o buffer anterior.
4. Finalmente temos que apontar o ponteiro line passado para uma string allocada que contenha a linha inteira sem o `'\n'`. Depois liberamos a memoria allocada nas strings intermediarias e retornamos 1 ou 0 para '\n' ou final do arquivo respectivamente.
5. Se os parametros tem algum problema (`BUFFER_SIZE <= 0`), ou em alguma dessas operacaoes nao conseguimos allocar memoria, liberamos toda a memoria allocada e retornamos -1.

## Snippets

```bash
echo '
.vscode
test.c
test/
tests/
tests/*
test*
example.c
a.out.dSYM
*.out
*.a
*.o
*/core
core
*.rb
' >> .git/info/exclude

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c && time ./a.out

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=0 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=9999 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 *.c && ./a.out

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c && time ./a.out

norminette *.c *.h
```

SSH easy peasy copy squeeze:

```bash
mkdir ~/.ssh

echo 'YOUR PRIVATE KEY
' > ~/.ssh/id_rsa

echo 'YOUR PUBLIC KEY
' > ~/.ssh/id_rsa.pub

chmod 600 ~/.ssh/id_rsa
```
