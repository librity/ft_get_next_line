# ft_get_next_line

42 Sao Paulo's main cursus project - Get Next Line

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

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 *.c && time ./a.out

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
