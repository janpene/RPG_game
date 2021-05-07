cmake_minimum_required(VERSION 3.19)
project(RPG_Igra)

set(CMAKE_CXX_STANDARD 20)

add_executable(RPG_Igra src/main.cpp src/domain/World.cpp src/domain/World.h src/domain/Hero.cpp src/domain/Hero.h src/domain/Princess.cpp src/domain/Princess.h src/domain/Enemy.cpp src/domain/Enemy.h src/domain/WorldObj.cpp src/domain/WorldObj.h src/app/Terminal.cpp src/app/Terminal.h)