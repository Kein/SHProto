#include "MaiBTService_Notify.h"

UMaiBTService_Notify::UMaiBTService_Notify() {
    this->NodeName = TEXT("Notify");
    this->_OnActivate = false;
    this->_OnDeactivate = false;
    this->_OnTick = false;
}



