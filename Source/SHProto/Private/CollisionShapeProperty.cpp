#include "CollisionShapeProperty.h"

FCollisionShapeProperty::FCollisionShapeProperty() {
    this->CollisionShapeType = ECollisionShapePropertyType::Line;
    this->Parameter1 = 0.00f;
    this->Parameter2 = 0.00f;
    this->Parameter3 = 0.00f;
}

