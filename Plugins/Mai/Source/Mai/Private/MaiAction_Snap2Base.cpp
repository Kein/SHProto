#include "MaiAction_Snap2Base.h"

UMaiAction_Snap2Base::UMaiAction_Snap2Base() {
    this->_OwnerATB = NULL;
    this->_OtherATB = NULL;
    this->_Disconnect = false;
    this->_SyncSnap = false;
    this->_BlockSnap = false;
    this->_Snap3D = false;
    this->_SnapMoveMulMin = 0.00f;
    this->_SnapMoveMulMax = 3.00f;
    this->_SnapMoveMulInterp = 10.00f;
    this->_RotationInterpSpeed = 6.00f;
    this->_TranslationInterpSpeed = 200.00f;
}




