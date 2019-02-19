int    ft_strcmp(char *s1, char *s2)
{
	while(*s1 == *s2 && *s1 && *s2){
		s1++;
		s2++;		
	}
	return ((unsigned char*)s1 - (unsigned char*)s2);
}

/* Testing Only 

#include <stdio.h> //for printf

int main(void)
{
	char	str1[5] = "Hello";
	char	str2[5] = "HellW";
	printf("output: %d\n", ft_strcmp(str1, str2));
}

*/