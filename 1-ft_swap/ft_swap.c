//Pass

void	ft_swap(int *a, int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*Testing Only
#include <stdio.h>
int main(void){
	int a = 5;
	int b = 7;
	ft_swap(&a, &b);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	return(0);
}
*/