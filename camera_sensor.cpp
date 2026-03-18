#include "camera_sensor.h"
#include <random>
#include <chrono>

SensorEvent CameraSensor::generateEvent(int id) {

    static std::mt19937 gen(std::random_device{}());
    std::uniform_real_distribution<> dist_distance(1.0, 100.0);
    std::uniform_real_distribution<> dist_speed(0.0, 30.0);

    SensorEvent event;
    event.object_id = id;
    event.distance = dist_distance(gen);
    event.speed = dist_speed(gen);
    event.timestamp = std::chrono::system_clock::now();

    return event;
}