#include "DaiFloatModifier.h"

UDaiFloatModifier::UDaiFloatModifier() {
    this->_Operator = EDaiFloatOperator::Mul;
    this->_InValue = 0.00f;
}

float UDaiFloatModifier::GetDefaultValue() const {
    return 0.0f;
}


