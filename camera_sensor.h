#ifndef CAMERA_SENSOR_H
#define CAMERA_SENSOR_H

#include "sensor_event.h"

class CameraSensor {
public:
    SensorEvent generateEvent(int id);
};

#endif