/* SUBJECT
Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "RaInB0w d4Sh!" | cat -e
z$
$> ./aff_z "ThE C4k3 Is a L|3" | cat -e
z$
$> ./aff_z | cat -e
z$
*/

// Passes all tests.

#include <unistd.h>

int		main(void){
	write(1,"z\n", 2);
	return (0);
}