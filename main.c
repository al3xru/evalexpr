#include <stdlib.h>
#include "eval.h"
#include <stdio.h>

int	main(int ac, char **av)
{

	t_stack		*test;

	test = ft_create_elem("test 2");
	//printf("%s\n", test->data);
	ft_stack_push(&test, "data 2");
	ft_stack_push(&test, "data 3 - del");
	//printf("%s\n", test->data);
	printf("%s\n", ft_stack_pop(&test));
	printf("%s\n", test->data);

	if (ac > 1)
	{
		//ft_putnbr(eval_expr(av[1]));
		//ft_putchar('\n');
	}
	return (0);
}