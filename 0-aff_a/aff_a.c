//Pass
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1,"a\n",2);
		return (0);
	}

	int i = 0;
	while(argv[1][i])
	{
		if(argv[1][i] != 'a')
			i++;
		else{
			write(1,"a\n",2);
			return (0);
		}

	}
	write(1,"\n",1);
	return (0);
	
}

// why does this test case do this?
/// ./aff_a "RaInB0w d4Sh!" | cat -e
// -sh: !": event not found
// Even with that happening it passes so whatever.
