#ifndef SENSOR_EVENT_H
#define SENSOR_EVENT_H

#include <chrono>

struct SensorEvent {
    int object_id;
    double distance;
    double speed;
    std::chrono::system_clock::time_point timestamp;
};

#endif