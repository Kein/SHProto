#pragma once
#include "CoreMinimal.h"
#include "SHTutorialHandlerBase.h"
#include "SHFlashlightTutorialHandler.generated.h"

class USHCharacterPlayItemsComponent;

UCLASS()
class SHPROTO_API USHFlashlightTutorialHandler : public USHTutorialHandlerBase {
    GENERATED_BODY()
public:
    USHFlashlightTutorialHandler();

protected:
    UFUNCTION()
    void ProcessEquipmentItemSpawned(USHCharacterPlayItemsComponent* Component, FName ItemContext);
    
};

