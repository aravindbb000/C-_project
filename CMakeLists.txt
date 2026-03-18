cmake_minimum_required(VERSION 3.10)
project(EyyesCollision)

set(CMAKE_CXX_STANDARD 17)

add_executable(collision_app
    main.cpp
    camera_sensor.cpp
    collision_detector.cpp
)
