#include "MaiImpactConfig.h"

FMaiImpactConfig::FMaiImpactConfig() {
    this->_PhysicalHit = false;
    this->_OverrideImpactAngle = false;
    this->_OverrideImpactRange = false;
    this->_OverrideImpactDir = false;
    this->_ImpactAngle = 0.00f;
    this->_ImpactRange = 0.00f;
    this->_ImpactDir = 0.00f;
    this->_DamageType = NULL;
    this->_OverrideDamage = false;
}

