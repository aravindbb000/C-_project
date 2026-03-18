# Dockerized C++ Collision Detection Simulation

## Overview

This project simulates a simplified perception pipeline for collision risk analysis.
It generates simulated camera sensor detections and evaluates potential collision risks using **Time-To-Collision (TTC)** calculations.

The application is implemented in **modular C++**, built using **CMake**, and containerized using **Docker** to provide a reproducible Linux-based development and execution environment.

---

## Features

* Simulated **camera sensor detections**
* **Time-To-Collision (TTC)** calculation
* Collision risk classification (**SAFE / WARNING**)
* Modular C++ architecture
* Automated builds using **CMake**
* Containerized execution using **Docker**

---

## Project Structure

```
.
├── main.cpp
├── camera_sensor.cpp
├── camera_sensor.h
├── collision_detector.cpp
├── collision_detector.h
├── sensor_event.h
├── CMakeLists.txt
├── Dockerfile
└── README.md

---

## Build and Run (Local)

Requirements:

* Linux / WSL
* g++
* CMake

Compile manually:

```
g++ main.cpp camera_sensor.cpp collision_detector.cpp -o collision_app
./collision_app
```

Using CMake:

```
mkdir build
cd build
cmake ..
make
./collision_app
```

---

## Run with Docker

Build the image:

```
docker build -t collision-sim .
```

Run the container:

```
docker run collision-sim
```

Docker automatically sets up the build environment, compiles the project, and runs the simulation.

---

## Technologies

* C++
* CMake
* Docker
* Linux / WSL
