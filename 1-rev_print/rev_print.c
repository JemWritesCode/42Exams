//Fails
// On this one, when you do with cat -e, it shows ^@olleH$ 
// I think I had just been off by 1
#include <unistd.h>

int		ft_strlen(char *str){
	int len = 0;
	while(str[len])
		len++;
	return (len);
}

int		main(int argc, char **argv)
{
	if(argc == 2){
	int i = ft_strlen(&argv[1][0]);
		while(i >= 0){
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
