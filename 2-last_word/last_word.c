//Success

#include <unistd.h>

int		is_space(char c){
	return (c == ' ' || c == '\t');
}

int		main(int argc, char const **argv){
	int i = 0;

	if (argc == 2){
		while(argv[1][i])
			i++; 
		i--; 
		while(is_space(argv[1][i]))
			i--; 
		if(i < 0)
			i++;
		while(!is_space(argv[1][i]) && argv[1][i])
			i--; 
		i++;
		while(!is_space(argv[1][i]) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return 0;
}