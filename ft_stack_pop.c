#include "eval.h"

char     *ft_stack_pop(t_stack **begin_list)
{
    t_stack     *list = *begin_list;
    char        *result;

    result = list->data;
    *begin_list = list->next;
    return (result); 
}