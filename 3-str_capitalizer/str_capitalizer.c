//Fail - Partial Solution
// Works on the first param string only + seg faults. 
#include <unistd.h> //Write Function

int		main(int argc, char **argv){

	if(argc >= 2){
		int letter = 0;
		int param = 1;;
		while(argv[param][letter]){
			while(argv[param][letter]){
				if(argv[param][letter] >= 'a' && argv[param][letter] <= 'z'){
					if (letter == 0 || (argv[param][letter - 1] == ' ' || argv[param][letter - 1] == '\t'))
						argv[param][letter] -= 32;
				}
				else if(argv[param][letter] >= 'A' && argv[param][letter] <= 'Z'){
					if (argv[param][letter - 1] != ' ' || argv[param][letter - 1] != '\t')
						argv[param][letter] += 32;
				}
				letter++;
			}
		letter = 0;
		while(argv[param][letter]){
			write(1, &argv[param][letter], 1);
			letter++;
		}
		write(1,"\n", 1);
		letter = 0;
		param++;
		}
	}
	else
		write(1,"\n", 1);
	return (0);
}

//Works on the first param only. Also Seg Faults.