//Success
#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i]){
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				(argv[1][i] + 1) > 'z' ? ft_putchar(argv[1][i] + 1 - 26) : ft_putchar(argv[1][i] + 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				(argv[1][i] + 1) > 'Z' ? ft_putchar(argv[1][i] + 1 - 26) : ft_putchar(argv[1][i] + 1);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}	
	write(1, "\n", 1);
	return (0);
}