#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HitEvent.h"
#include "SHCharacterImpactInteraction.generated.h"

UINTERFACE(Blueprintable)
class USHCharacterImpactInteraction : public UInterface {
    GENERATED_BODY()
};

class ISHCharacterImpactInteraction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void TryStartInteraction(const FHitEvent& HitData);
    
};

