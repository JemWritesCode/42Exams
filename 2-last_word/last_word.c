///// Attempt 3
// Unlike last time, instead of checking for position 0, I need to just check while currently string exists. 
// Need to test this works, but it covers that broken test case.

// The 2 additional things to test for in addition to given examples
// "test" with no space before or after.
// " thing," with a space only before.

#include <unistd.h>

int		main(int argc, char** argv){
	if (argc == 2){
		int i = 0;
		while (argv[1][i])
			i++; //now i is at the ending null terminator
		i--; // step one back from the null terminator (the last letter)
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--; // get through any trailing space/tabs
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--; // get through to character/space/-1 memory before the first letter of last word.
		i++; // go back to first letter of last word, 
		while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t')){
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}



///// Attempt 2

//Fails this test case. 
$> ./h0a81nrw80gkkbvryyjz288a " 3fHLJGMCIewap,"
$> diff -U 3 user_output_test20 test20.output | cat -e
--- user_output_test20	2019-02-19 10:22:06.000000000 -0800$
+++ test20.output	2019-02-19 10:22:05.000000000 -0800$
@@ -1 +1 @@$
-$
+3fHLJGMCIewap,$

Diff KO :(
Grade: 0


//so when there's a space in front but not after?

#include <unistd.h>

int		main(int argc, char** argv){
	if (argc == 2){
		int i = 0;
		while (argv[1][i])
			i++; //now i is at the ending null terminator
		i--; // step one back from the null terminator (the last letter)
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--; // get through any trailing space/tabs
		while (i > 0 && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--; // get through to the space before the last word.
		if(i != 0) // if it's 0 there were no words or there was no space in front of last word.
			i++; // go back to first letter of last word, 
		while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t')){
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


//Need to do an extra test case every time for this problem with just 1 word no spaces.
// ./last_word "test" | cat -e


/* with debug statements 

int		main(int argc, char** argv){
	if (argc == 2){
		int i = 0;
		while (argv[1][i])
			i++; //now i is at the ending null terminator
		write(1, &argv[1][i], 1); //jemdebug
		i--; // step one back from the null terminator (the last letter)

		write(1, "\n", 1); //jemdebug
		write(1, &argv[1][i], 1); //jemdebug
		
		while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--; // get through any trailing space/tabs

		write(1, "\n", 1); //jemdebug
		write(1, &argv[1][i], 1); //jemdebug
		
		while (i > 0 && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--; // get through to the space before the last word.
		i++; // go back to first letter of last word.
		if (i != 0) // if it's 0 there were no words.
			while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t')){
				write(1, &argv[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}

*/

////////////////////////////////////////////////////////

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