#include "MaiFollowingComponent.h"

UMaiFollowingComponent::UMaiFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_OffsetFromCornersDistance = 0.00f;
    this->_UseViewLocation = false;
    this->_CharacterMoveComp = NULL;
    this->_FilterClass = NULL;
    this->_PortalOwner = NULL;
    this->_EnablePortals = false;
    this->_PortalMaxDistance = 50.00f;
    this->_EnableShortcuts = false;
    this->_ShourtcutDistance = 500.00f;
    this->_ShortcutFilterClass = NULL;
    this->_ObservePath = false;
    this->_ObservePathPeriod = 5.00f;
}


