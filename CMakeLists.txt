
cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -W -Wall -Wextra -Wunused -Wuninitialized")

add_library(hmap STATIC
    src/lhmap_new.c
    src/lhmap_with_capacity.c
    src/lhmap_clone.c
    src/lhmap_merge.c
    src/lhmap_clear.c
    src/lhmap_drop.c
    src/lhmap_size.c
    src/lhmap_keys.c
    src/lhmap_values.c
    src/lhmap_get.c
    src/lhmap_set.c
    src/lhmap_remove.c
    src/lhmap_reserve.c
    src/lhmap_shrink_to_fit.c
    src/lhmap_for_each.c
    src/intern_lhmap_find_key.c
)
add_dependencies(hmap vec)
target_include_directories(hmap PUBLIC src)
target_link_libraries(hmap vec)



