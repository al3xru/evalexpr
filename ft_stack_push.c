#include "eval.h"

void ft_stack_push(t_stack **begin_list, void *data)
{
    t_stack *list;

    list = ft_create_elem(data);
    if (*begin_list)
    {
        list->next = *begin_list;
        *begin_list = list;
    }
    else
        *begin_list = list;
}