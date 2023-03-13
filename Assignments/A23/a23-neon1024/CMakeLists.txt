cmake_minimum_required(VERSION 3.24)
project(a23_neon1024 C)

set(CMAKE_C_STANDARD 11)

include_directories(domain)
include_directories(repository)
include_directories(service)
include_directories(UI)

add_executable(a23_neon1024
        domain/CustomErrors.h
        domain/Estate.h
        repository/estate_repository.h
        service/estate_service.h
        UI/console.h
        main.c UI/console.c main.h domain/Estate.c domain/CustomErrors.c repository/estate_repository.c service/estate_service.c)
