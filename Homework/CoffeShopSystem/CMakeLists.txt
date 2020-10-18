cmake_minimum_required(VERSION 3.10)
project(CoffeShopSystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/Americana.hpp
    include/AmericanaWithMilk.hpp
    include/AmericanaWithSoy.hpp
    include/AmericanaWithWhip.hpp
    include/Coffe.hpp
    include/Decaf.hpp
    include/Espresso.hpp
    )

set(SRC
    src/Americana.cpp
    src/Decaf.cpp
    src/Espresso.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
