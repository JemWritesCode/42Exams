/* SUBJECT 
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "My life for Aizr" "z" "u"
My life for Aiur
$>./search_and_replace "gaetan" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "In foct, stoff crew ore very nice. They like metol." "o" "a" | cat -e
In fact, staff crew are very nice. They like metal.$
*/

#include <unistd.h>

int ft_strlen(char *str){
	int len = 0;
	while(str[len])
		len++;
	return (len);
}

int		main(int argc, char **argv){
	if (argc == 4){
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1){
			int i = 0;
			while(argv[1][i]){
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
					write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}