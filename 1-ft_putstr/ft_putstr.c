//Pass

#include <unistd.h>

void	ft_putstr(char *str){
	while(*str)
		write(1, str++, 1);
}

/*Testing Only

int		main(void){
	char *string = "Hello";
	ft_putstr(string);
}

*/