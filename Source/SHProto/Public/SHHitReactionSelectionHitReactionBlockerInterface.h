#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHEnemyHitReactionSelectionAllowedStates.h"
#include "SHHitReactionSelectionHitReactionBlockerInterface.generated.h"

UINTERFACE(Blueprintable)
class USHHitReactionSelectionHitReactionBlockerInterface : public UInterface {
    GENERATED_BODY()
};

class ISHHitReactionSelectionHitReactionBlockerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void GetHitReactionBlockerDebugDisplayName(FString& OutDebugName) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FSHEnemyHitReactionSelectionAllowedStates GetHitReactionBlockerAllowedHitReactions() const;
    
};

