/* SUBJECT
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

//Passes, but can probably be shortened. 


#include <unistd.h>

int	ft_strContains(char *str, char c){
	while (*str){
		if (*str == c)
			return(1);
		str++;
	}
	return(0);
}

int ft_strlen(char *str){
	int len = 0;
	while(str[len])
		len++;
	return (len);
}

int		main(int argc, char **argv){
	if (argc == 3){
		char newStr[ft_strlen(argv[1]) + ft_strlen(argv[2])];
		int i = 0;
		int x = 0;
		while (argv[1][i]){
			if(!ft_strContains(newStr, argv[1][i])){
				newStr[x] = argv[1][i];
				x++;
			}			
			i++;
		}
		i = 0;
		while (argv[2][i]){
			if(!ft_strContains(newStr, argv[2][i])){
				newStr[x] = argv[2][i];
				x++;
			}			
			i++;
		}
		while (newStr[x]){
			newStr[x] = '\0';
			x++;
		}
		x = 0;
		while(newStr[x]){
			write(1, &newStr[x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}