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
' >>.git/info/exclude

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c && time ./a.out

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=0 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=9999 *.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 *.c && ./a.out

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c && ./a.out
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c && time ./a.out

norminette *.c *.h
