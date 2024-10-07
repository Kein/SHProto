#pragma once
#include "CoreMinimal.h"
#include "SHTutorialHandlerBase.h"
#include "SHCombineItemsTutorialHandler.generated.h"

class USHCharacterPlayItemsComponent;

UCLASS()
class SHPROTO_API USHCombineItemsTutorialHandler : public USHTutorialHandlerBase {
    GENERATED_BODY()
public:
    USHCombineItemsTutorialHandler();

protected:
    UFUNCTION()
    void ProcessItemCollected(USHCharacterPlayItemsComponent* Component, FName ItemContext);
    
};

