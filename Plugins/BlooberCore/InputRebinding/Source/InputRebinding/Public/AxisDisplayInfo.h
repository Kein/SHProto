#pragma once
#include "CoreMinimal.h"
#include "AxisDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FAxisDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    bool ForPadBindOnlyAsAxis;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText PlusDisplayName;
    
    UPROPERTY(EditAnywhere)
    FText MinusDisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bIsRebindable;
    
    UPROPERTY(EditAnywhere)
    bool bIsHoldable;
    
    UPROPERTY(EditAnywhere)
    bool bUseAdaptiveTriggers;
    
    FAxisDisplayInfo();
};

