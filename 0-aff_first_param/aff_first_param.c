//Success
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		while(argv[1][i]){
			write(1, &argv[1][i], 1);
			i++;
		}
	}	
	write(1, "\n", 1);
	return (0);
}