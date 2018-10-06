#ifndef H_EVAL_H
# define H_EVAL_H

typedef struct		s_stack
{
	struct s_stack	*next;
	void			*data;
}					t_stack;

t_stack				*ft_create_elem(void *data);
void 				ft_stack_push(t_stack **begin_list, void *data);
char 				*ft_stack_pop(t_stack **begin_list);

#endif