// Needs to handle ./inter "Hello" "Hello"
// I had forgotten to null terminate the new string so when it was doing put_str it went too far. 
// I guess empty char array isn't just filled with \0? Why do I have to manually null terminate it?
// It did seem to generally work otherwise.

#include <unistd.h>

int	is_char_in_string(char c, char *str){
	while (*str){
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_strlen(char *str){
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_putstr(char *str){
	while (*str){
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		char newstr[ft_strlen(&argv[1][0]) + ft_strlen(&argv[2][0]) + 1]; // leave space for setting null terminator
		int i = 0;
		int x = 0;
		while(argv[1][i]){
			if (is_char_in_string(argv[1][i], &argv[2][0]) && !is_char_in_string(argv[1][i], &newstr[0]) ){
				newstr[x] = argv[1][i];
				x++;
			}
			i++;
		}
		newstr[x] = '\0'; // null terminate the new string
		ft_putstr(&newstr[0]);
	}	
	ft_putchar('\n');
	return (0);
}