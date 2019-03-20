#ifndef FUNC_POINT_LIST
# define FUNC_POINT_LIST

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif