// Passes the listed examples but fails: 
// $> ./x3bs530ky93cjbgotljbbgms "BgmJhf6yIWQLp"
// $> diff -U 3 user_output_test4 test4.output | cat -e
// --- user_output_test4	2018-12-11 10:28:46.000000000 -0800$
// +++ test4.output	2018-12-11 10:28:46.000000000 -0800$
// @@ -1 +1 @@$
// -gmJhf6yIWQLp$
// +BgmJhf6yIWQLp$

#include <unistd.h>

int		ft_strlen(char *str){
	int len = 0;
	while (str[len])
		len++;
	return(len);
}

int		main(int argc, char **argv){
	if(argc == 2){
		int i = ft_strlen(&argv[1][0]);
		i--;
		while((argv[1][i] == ' ' || argv[1][i] == '\t') && i > 0)
			i--;		
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && i > 0)
			i--;
		i++;
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t'){
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
}