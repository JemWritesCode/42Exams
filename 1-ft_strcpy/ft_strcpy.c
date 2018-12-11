//Pass
char    *ft_strcpy(char *s1, char *s2){
	int i = 0;

	while(s2[i]){
		s1[i] = s2[i];
		i++;
	}
	return(s1);
}

////Testing Only, Don't Submit
// #include <stdio.h>
// 
// int		main(void){
// 	char str1[6] = "Hello"; // Have to set the array size to test this way or you get a bus error.
// 	char str2[6] = "Whats";
// 
// 	printf("Str1 Before: %s\n", str1);
// 	ft_strcpy(str1,	str2);
// 	printf("Str1 After: %s\n", str1);
// 	return(0);
// }