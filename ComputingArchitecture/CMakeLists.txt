cmake_minimum_required(VERSION 3.10.2)
project(hw2)

set(CMAKE_CXX_STANDARD 17)

add_executable(hw2 
    src/utils/FigureUtils.cpp  
    src/utils/FileUtils.cpp  
    src/figure.cpp  
    src/Parallelepiped.cpp  
    src/Sphere.cpp  
    src/Tetrahedron.cpp
    src/figure.h    
    src/main.cpp   
    src/Parallelepiped.h    
    src/Sphere.h    
    src/Tetrahedron.h
    src/utils/FigureUtils.h  
    src/utils/FileUtils.h
    src/container.h
    src/container.cpp
)
