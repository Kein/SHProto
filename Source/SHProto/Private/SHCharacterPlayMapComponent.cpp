#include "SHCharacterPlayMapComponent.h"

USHCharacterPlayMapComponent::USHCharacterPlayMapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->OwnerCharacter = NULL;
}

int32 USHCharacterPlayMapComponent::FindObjectDataValue(const FName& ObjectID, ESHMapsEnum Map) const {
    return 0;
}

void USHCharacterPlayMapComponent::AddOrUpdateObjectDataArray(const TArray<FSHMapObjectDataStruct>& MapObjectDataArray) {
}

void USHCharacterPlayMapComponent::AddOrUpdateObjectData(const FSHMapObjectDataStruct& MapObjectData) {
}

void USHCharacterPlayMapComponent::AddOrUpdateDynamicObjectData(const FSHMapDynamicObjectDataStruct& MapDynamicObjectData) {
}

void USHCharacterPlayMapComponent::AddFogRevealObjectToApply(FSHMapFogRevealObjectData MapFogRevealObjectData) {
}


