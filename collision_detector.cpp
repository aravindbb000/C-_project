#include "collision_detector.h"
#include <iostream>

bool CollisionDetector::isCollisionRisk(const SensorEvent& event) {

    if (event.speed <= 0.1)
        return false;

    double ttc = event.distance / event.speed;

    std::cout << "TTC: " << ttc << " sec ";

    return ttc < 3.0;
}