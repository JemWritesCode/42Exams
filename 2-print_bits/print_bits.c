//Pass, but this is sloppy, I should use a shorter solution. 

#include <unistd.h>
void	print_bits(unsigned char octet)
{
	if(octet >= 128){
		write(1, "1", 1);
		octet -= 128;
	}
	else
		write(1, "0", 1);

	if(octet >= 64){
		write(1, "1", 1);
		octet -= 64;
	}
	else
		write(1, "0", 1);

	if(octet >= 32){
		write(1, "1", 1);
		octet -= 32;
	}
	else
		write(1, "0", 1);

	if(octet >= 16){
		write(1, "1", 1);
		octet -= 16;
	}
	else
		write(1, "0", 1);
		
	if(octet >= 8){
		write(1, "1", 1);
		octet -= 8;
	}
	else
		write(1, "0", 1);

	if(octet >= 4){
		write(1, "1", 1);
		octet -= 4;
	}
	else
		write(1, "0", 1);	

	if(octet >= 2){
		write(1, "1", 1);
		octet -= 2;
	}
	else
		write(1, "0", 1);	

	if(octet >= 1){
		write(1, "1", 1);
		octet -= 1;
	}
	else
		write(1, "0", 1);	
}

/* Testing Only
#include <stdio.h>
int		main(void){
	print_bits(2);
		printf("\n");
	print_bits(4);
		printf("\n");
	print_bits(128);
		printf("\n");
	print_bits(27);
	return(0);
}

*/