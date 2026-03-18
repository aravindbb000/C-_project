#ifndef COLLISION_DETECTOR_H
#define COLLISION_DETECTOR_H

#include "sensor_event.h"

class CollisionDetector {
public:
    bool isCollisionRisk(const SensorEvent& event);
};

#endif