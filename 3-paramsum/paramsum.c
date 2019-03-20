//Success
#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

void	ft_putnum(int num){
	if (num >= 10){
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	else
		ft_putchar(num + '0');
}


int		main (int argc, char **argv){

	int args = 0;
	args = argc - 1;
	ft_putnum(args);
	if(argv[0][0])
		write(1, "\n", 1);
	return (0);
}

/* Testing Only
// Don't think I have to do the negative numbers for this since args can't be negative
#include <limits.h>
int		main (int argc, char **argv){

	ft_putnum(2);
	ft_putchar('\n');
	ft_putnum(25);
	ft_putchar('\n');
	ft_putnum(256);
	ft_putchar('\n');
	ft_putnum(INT_MAX);
	ft_putchar('\n');
	ft_putnum(0);
	ft_putchar('\n');
	ft_putnum(3334);
	ft_putchar('\n');
	ft_putnum(123456789);
	ft_putchar('\n');


	int args = 0;
	args = argc - 1;
	if(argv[0][0])
		write(1, "\n", 1);

	return (0);
}
*/
