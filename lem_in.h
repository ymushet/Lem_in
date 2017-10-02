#ifndef _LEM_IN_H_
# define _LEM_IN_H_

//ПЕРЕДЕЛАТЬ АТОИ
//СДЕЛАТЬ ТИП ДАННЫХ ЭНТОВ
//БОНУСЫ ?
//ЛИКИ
//НОРМА
//ТЕСТЫ
//добавить функионал когда обрываем подачу даных ошибкой и идет проверка на то есть ли у нас путь!

# include "./libft/libft.h"
# include "./libft/libftprintf.h"
# include "limits.h"

/*
 * ft_error has close fd (remove after tests)
 * ft_read_rooms( ..., int fd) - remove after tests
 * close fd before break (line 45 in read map) - remove after tests;
 * also line 18 in read_map.c - remove after tests.
 */

/*
 * Если в линке не существует комната - ЕРРОР ! справить
 */
/*typedef struct s_link;
typedef struct s_room;
typedef struct  s_data;
typedef struct s_path;*/

typedef struct s_link
{
    struct s_room *room;
    struct s_link *next;
}               t_link;

typedef struct s_room
{
    int     id;
    char    *name;
    int     type;
    int     x;
    int     y;
    int     used;
    int     visited;
    int     distance;
    int     ant;
    t_link  *links;
    t_link  *parent;
    struct s_room  *next;
}               t_room;

typedef struct  s_data
{
    int ants;
    int start;
    int end;
    int links;
    int fd;
    int rcount;
    char **room_name;
    char *join;
}               t_data;

typedef struct s_path
{
    struct  s_link *way;
    struct  s_path *next;
    int     length;
}               t_path;

void    ft_lem_in(int fd);
t_data *ft_read_map(t_room **rooms, int fd); //MAIN FUNCTION FOR READ, MALLOC AND VALIDATION. will return data to main (and create room);
int     ft_read_ants(int fd);
void ft_read_rooms(t_room **room, t_data *data); //start - 2, end - 3, comment - 1, link - 4, room - 5
int     ft_get_line_type(char *str);
int     ft_is_room(char *line);
int		ft_is_str_digit(char *str);
int     ft_check_coord(char **str);
int     check_limits(long n);//here
int     ft_is_correct_name(char *name);
int     ft_is_link(char *str); //rewrite
int     ft_is_valid(int i, char **line, t_room **rooms, t_data *data); //start - 2, end - 3, comment - 1, link - 4, room - 5
void    ft_error(int i);
t_room *ft_malloc_new_room(char *line, int type);
void ft_add_room(t_room **rooms, char *line, int type);
int     check_room(t_room *room, char *line);
t_room  *ft_find_room(t_room **room, char *name);
int     check_link(t_room **room, char *link);
void    ft_add_link(t_room **room, char *link); //one way connection
t_link *ft_malloc_link(char *link, t_room **room);
int read_start_end(char **line, t_room **rooms, t_data *data, int type); //start - 2, end - 3, comment - 1, link - 4, room - 5
void ft_add_data(t_room **rooms, t_data *data, char *line, int i);
int ft_second_validation(t_data *data);
void ft_solve_map(t_data *data, t_room *room);//MUST NOT BE VOID; (t_path_list*)
t_room *ft_get_start(t_room *room);
void dfs(t_room *start, t_link **que, t_path **path);
void push(t_link **que, t_room **start);
t_path *ft_malloc_path(void);
void    write_path(t_link **que, t_path **path);
int ft_calc_length(t_link *path);
void    pop_last(t_link **que); //possible memmory leaks
void insert(t_path **first, t_path **second, t_path **insert, t_path **path); //проверить надо ли ** что бы менялось значение.
void ft_insert_path(t_path *copy, t_path **path);
t_link *ft_create_link(void);
t_link *ft_malloc_empty_path(t_link *que);
t_link *ft_copy_que(t_link **que); //вычислить длину пути при копировании.
void ft_add_second_link(t_room **room, char *link1, char *link2);
int is_link_exist(t_room *room, char *line);
void ft_print_map(int ants, t_path **path);
int is_crossed(t_path **path, t_path *i);
int is_common_rooms(t_link *path, t_link *i);
void ft_print_path(unsigned int ants, t_path *path);
int ft_make_step(int a_num, int *arr, t_path **path);
int ft_choose_and_move_thread(t_path **path, int a_num, int *arr);
int ft_move_thread(t_link *a_room, int *a_arr, int a_num);
t_link *ft_find_ant(int a_num, t_path **path);
int is_ants(int *a_arr, int i);
t_path *ft_malloc_l(t_path **path);
void ft_add_path(t_path **start, t_path **i);
void ft_free_split(char ***arr);

#endif