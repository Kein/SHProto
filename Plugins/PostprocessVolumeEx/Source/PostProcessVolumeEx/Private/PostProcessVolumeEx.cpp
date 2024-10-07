#include "PostProcessVolumeEx.h"

APostProcessVolumeEx::APostProcessVolumeEx(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_OldDOFValue = -1000000.00f;
    this->_OldDOFValueWasOverriden = false;
    this->_NowDOFValue = -1.00f;
    this->_DOFCtrl = NULL;
    this->_IsDuringEditionOfBoundSettings = false;
    this->HasOverrideSettings = false;
    this->ParentVolume = NULL;
    this->HardConnected = false;
    this->AutoDOFEnable = false;
    this->AutoDOFLimitMin = 50.00f;
    this->AutoDOFLimitMax = 1500.00f;
    this->AutoDOFInterpolationSpeed = 1.00f;
}


