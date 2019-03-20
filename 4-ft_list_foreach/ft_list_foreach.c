// Success
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list){
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}


///* Testing Only  */
//#include <string.h>
//#include <stdio.h>
//
//int		main(void)
//{
//	t_list first = {NULL, (void*)"Hello"};
//	t_list second = {NULL, (void*)"Goodbye"};
//	first.next = &second;
//	t_list third = {NULL, (void*)"Something"};
//	second.next	= &third;
//
//	t_list *head = &first;
//
//	//while(head){
//	//	printf("%s\n", head->data);
//	//	head = head->next;
//	//}
//
//}