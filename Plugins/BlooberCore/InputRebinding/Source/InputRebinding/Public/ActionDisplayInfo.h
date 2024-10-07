#pragma once
#include "CoreMinimal.h"
#include "ActionDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FActionDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    bool bIsRebindable;
    
    UPROPERTY(EditAnywhere)
    bool bIsHoldable;
    
    UPROPERTY(EditAnywhere)
    bool bUseAdaptiveTriggers;
    
    FActionDisplayInfo();
};

