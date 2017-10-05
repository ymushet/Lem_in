/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:35:57 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 16:17:06 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "./libft/libft.h"
# include "./libft/libftprintf.h"
# include "limits.h"

typedef	struct		s_link
{
	struct s_room	*room;
	struct s_link	*next;
}					t_link;

typedef struct		s_room
{
	int				id;
	char			*name;
	int				type;
	int				x;
	int				y;
	int				visited;
	int				ant;
	t_link			*links;
	struct s_room	*next;
}					t_room;

typedef struct		s_data
{
	int				ants;
	int				start;
	int				end;
	int				links;
	int				fd;
	int				ant;
	int				count;
	int				scount;
	int				rcount;
	int				path;
    int             help;
	struct s_link	*a_path;
	char			*join;
}					t_data;

typedef struct		s_path
{
	struct s_link	*way;
	struct s_path	*next;
	int				length;
}					t_path;

void				ft_lem_in(int fd);
t_data				*ft_read_map(t_room **rooms, int fd);
int					ft_read_ants(int fd, t_data *data);
void				ft_read_rooms(t_room **room, t_data *data);
int					ft_get_line_type(char *str, t_data *data);
int					ft_is_room(char *line);
int					ft_is_str_digit(char *str);
int					ft_check_coord(char **str);
int					check_limits(long n);
int					ft_is_correct_name(char *name);
int					ft_is_link(char *str);
int					ft_is_valid(int i, char **line,
								t_room **rooms, t_data *data);
void				ft_error(t_data *data);
t_room				*ft_malloc_new_room(char *line, int type);
void				ft_add_room(t_room **rooms, char *line, int type);
int					check_room(t_room *room, char *line);
t_room				*ft_find_room(t_room **room, char *name);
int					check_link(t_room **room, char *link);
void				ft_add_link(t_room **room, char *link);
t_link				*ft_malloc_link(char *link, t_room **room);
int					read_start_end(char **line, t_room **rooms,
					t_data *data, int type);
void				ft_add_data(t_room **rooms,
								t_data *data, char *line, int i);
int					ft_second_validation(t_data *data);
void				ft_solve_map(t_data *data, t_room *room);
t_room				*ft_get_start(t_room *room);
void				dfs(t_room *start, t_link **que, t_path **path);
void				push(t_link **que, t_room **start);
t_path				*ft_malloc_path(void);
void				write_path(t_link **que, t_path **path);
int					ft_calc_length(t_link *path);
void				pop_last(t_link **que);
void				insert(t_path **first,
							t_path **second, t_path **insert, t_path **path);
void				ft_insert_path(t_path *copy, t_path **path);
t_link				*ft_create_link(void);
t_link				*ft_malloc_empty_path(t_link *que);
t_link				*ft_copy_que(t_link **que);
void				ft_add_second_link(t_room **room, char *link1, char *link2);
int					is_link_exist(t_room *room, char *line);
void				ft_print_map(t_data *data, t_path **path);
int					is_crossed(t_path **path, t_path *i);
int					is_common_rooms(t_link *path, t_link *i);
void				ft_print_path(t_data *data, t_path *path);
int					ft_make_step(int a_num, int *arr,
								t_path **path, t_data *data);
int					ft_choose_and_move_thread(t_path **path, int a_num,
												int *arr, t_data *data);
int					ft_move_thread(t_link *a_room, int *a_arr, int a_num);
t_link				*ft_find_ant(int a_num, t_path **path);
int					is_ants(int *a_arr, int i);
t_path				*ft_malloc_l(t_path **path);
void				ft_add_path(t_path **start, t_path **i);
void				ft_free_split(char ***arr);
void				ft_add_to_line(char **line, char **append);
void				ft_free_data(t_data **data);
void				ft_free_rooms(t_room **room);
void				ft_free_path(t_path **path);
void				ft_free_links(t_link **links);
int					ft_is_room_2(char **tmp);
void				ft_free_start(t_path **path);
void				ft_show_path(t_path *path);
void				ft_print_way(t_link *way);
int					ft_get_line_type2(char *str, t_data *data);
void				ft_print_usage(void);
int					ft_read_flag_ant(t_data *data);
#endif
