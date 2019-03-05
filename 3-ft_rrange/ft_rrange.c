//Fail
//Need to account for lists with end being less than start and return null for failed malloc.
#include <stdlib.h>

int     *ft_rrange(int start, int end){
	int len = 0;
	int *arr;
	len = end - start + 1;
	arr = (int*)malloc(sizeof(int) * len);

	int i = 0;
	while(--len >= 0){
		arr[len] = start + i;
		i++;
	}	
	return(&arr[0]);
}


/*Testing Only

int     *ft_rrange(int start, int end){
	int len = 0;
	int *arr;
	int lencpy = 0;
	len = end - start + 1;
	lencpy = len;
	printf("len: %d\n", len); //testing
	arr = (int*)malloc(sizeof(int) * len);

	int i = 0;
	while(--len >= 0){
			printf("len: %d\n", len); //testing
		arr[len] = start + i;
		i++;
	}
	
	//testing Only
	int x = 0;
	//printf("Test: %d", arr[x++]);
	while (lencpy){ // this can't show the negatives.
		printf("Array[%d]: %d\n", x, arr[x]);
		x++;
		lencpy--;
	}
}
	
	return(&arr[0]);

int		main(void){
	ft_rrange(-1, 2);
}




