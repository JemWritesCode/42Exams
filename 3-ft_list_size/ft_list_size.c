//Fail - Partial Solution

#include "ft_list.h"

int	ft_list_size(t_list *begin_list){
	int counter = 1;

	while(begin_list->next != 0){
		counter++;
		begin_list = begin_list->next;
	}
		return(counter);
}

//*Testing Only

