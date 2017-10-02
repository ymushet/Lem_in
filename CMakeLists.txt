cmake_minimum_required(VERSION 3.7)
project(Lem_in)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES add_data.c add_link.c add_room.c algo.c ants.c dfs.c line_validation.c link_validation.c main.c read_map.c second_validation.c validation.c choose_path.c print_lem.c print_lem2.c free.c dfs2.c)
add_executable(Lem_in ${SOURCE_FILES})
target_link_libraries(Lem_in ${CMAKE_SOURCE_DIR}/libft/libft.a)