
cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -W -Wall -Wextra -Wunused -Wuninitialized -O3")

add_library(hmap STATIC
    src/lhmap_new
    src/lhmap_with_capacity
    src/lhmap_clone
    src/lhmap_merge
    src/lhmap_clear
    src/lhmap_drop
    src/lhmap_size
    src/lhmap_keys
    src/lhmap_values
    src/lhmap_get
    src/lhmap_set
    src/lhmap_reserve
    src/lhmap_shrink_to_fit
    src/lhmap_for_each)

target_include_directories(hmap PRIVATE "../vec/src")
