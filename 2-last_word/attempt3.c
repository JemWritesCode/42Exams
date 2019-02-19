#include <unistd.h>

int		main(int argc, char** argv){
	if (argc == 2){
		int i = 0;
		while (argv[1][i])
			i++; //now i is at the ending null terminator
		i--; // step one back from the null terminator (the last letter)
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--; // get through any trailing space/tabs
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--; // get through to character/space/-1 memory before the first letter of last word.
		i++; // go back to first letter of last word, 
		while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t')){
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
