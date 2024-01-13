
#include <vector>

#include <raylib.h>

#include "core/vault.hpp"

#include "object/humun_object.hpp"

Camera Vault::camera =
    {
        Vector3{0.0f, CAMERA_INTERVAL, 0.0f}, // Camera position
        Vector3{1.0f, 0.0f, 0.0f},            // Camera looking at point
        Vector3{0.0f, 1.0f, 0.0f},            // Camera up vector (rotation towards target)
        45.0f,                                // Camera field-of-view Y
        CAMERA_PERSPECTIVE                    // Camera projection type
};

MapGObject Vault::map;

std::vector<BaseObject *> Vault::object = std::vector<BaseObject *>();
HumunObject *Vault::humun = nullptr;
GoalObject *Vault::goal = nullptr;