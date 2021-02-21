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

```bash
./run_tests.sh 0
./run_tests.sh 2
./run_tests.sh 3
./run_tests.sh 4
./run_tests.sh 5
./run_tests.sh 6
./run_tests.sh 7
./run_tests.sh 8
./run_tests.sh 9999
./run_tests.sh 10000000
./run_tests.sh 99999999
./run_tests.sh 9999999999
```

```bash
git clone https://github.com/charMstr/GNL_lover.git
git clone https://github.com/lgrellie/gnl_tester.git
git clone https://github.com/mrjvs/42cursus_gnl_tests.git
git clone https://github.com/Mazoise/42TESTERS-GNL.git
git clone https://github.com/Hellio404/Get_Next_Line_Tester.git
git clone https://github.com/C4r4c0l3/gnl-war-machine-v2019.git
git clone https://github.com/Sherchryst/gnlkiller.git
git clone https://github.com/harm-smits/gnl-unit-test.git
git clone https://github.com/Tripouille/gnlTester.git
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
