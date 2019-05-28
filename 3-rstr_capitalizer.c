/* SUBJECT

Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts 
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>
*/

// Passes Tests.

#include <unistd.h>

int ft_isSpaceEnd(char c){
	return(c == ' ' || c == '\t' || c == '\0');
}

int main(int argc, char **argv){
	if (argc == 1)
		write(1, "\n", 1);
	int x = 0;
	while (++x < argc){ //loop through each of the string arguments as long as they exist.
		int i = 0;
		while(argv[x][i]){
			if (argv[x][i] >= 'A' && argv[x][i] <= 'Z' && !ft_isSpaceEnd(argv[x][i + 1]))
				argv[x][i] = argv[x][i] + 32; // make lowercase
			else if (argv[x][i] >= 'a' && argv[x][i] <= 'z' && ft_isSpaceEnd(argv[x][i + 1]))
				argv[x][i] = argv[x][i] - 32; // make uppercase
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}