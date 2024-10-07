#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESoundMovement.h"
#include "EVerticalStance.h"
#include "BeingFootstepPersonalization.generated.h"

class ABeingFootstep;

UINTERFACE(Blueprintable, MinimalAPI)
class UBeingFootstepPersonalization : public UInterface {
    GENERATED_BODY()
};

class IBeingFootstepPersonalization : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    EVerticalStance GetVerticalStance() const;
    
    UFUNCTION(BlueprintNativeEvent)
    ESoundMovement GetSoundMovement() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void FootstepCreated(ABeingFootstep* Footstep) const;
    
};

