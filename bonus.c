#include "lem_in.h"

void	ft_show_path(t_path *path)
{
	t_path *p;

	p = path;
	while (p != NULL)
	{
		ft_print_way(p->way);
		p = p->next;
	}
}

void	ft_print_way(t_link *way)
{
	t_link *w;

	w = way;
	ft_printf("START -> ");
	w = w->next;
	while (w->next != NULL)
	{
		printf("%s -> ", w->room->name);
		w = w->next;
	}
	ft_printf("FINISH\n");
}