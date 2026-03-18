#include <iostream>
#include <vector>


#include "camera_sensor.h"
#include "collision_detector.h"

int main() {

    CameraSensor sensor;
    CollisionDetector detector;

    std::vector<SensorEvent> events;

    // Generate sensor events
    for (int i = 0; i < 5; ++i) {
        events.push_back(sensor.generateEvent(i));
    }

    // Process events
    for (const auto& e : events) {

    std::cout << "Object ID: "
              << e.object_id
              << " | Distance: "
              << e.distance
              << " m | Speed: "
              << e.speed
              << " m/s | ";

    // ---- START TIMER ----
    auto start =
        std::chrono::high_resolution_clock::now();

    bool risk = detector.isCollisionRisk(e);

    // ---- END TIMER ----
    auto end =
        std::chrono::high_resolution_clock::now();

    auto duration =
        std::chrono::duration_cast
        <std::chrono::microseconds>(end - start);

    if (risk)
        std::cout << "COLLISION WARNING!";
    else
        std::cout << "SAFE";

    std::cout << " | Processing Time: "
              << duration.count()
              << " microseconds";

    std::cout << std::endl;
    }

    return 0;
}