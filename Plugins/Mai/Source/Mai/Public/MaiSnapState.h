#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "MaiState.h"
#include "MaiSnapState.generated.h"

class AActor;

UCLASS(EditInlineNew)
class MAI_API UMaiSnapState : public UMaiState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector _SnapTo;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EEasingFunc::Type> _EasingFunc;
    
    UMaiSnapState();

    UFUNCTION(BlueprintCallable)
    void Config2(FVector Location, FVector faceTo, float Timeout, TEnumAsByte<EEasingFunc::Type> easingFunc);
    
    UFUNCTION(BlueprintCallable)
    void Config(FVector Location, AActor* faceTo, float Timeout, TEnumAsByte<EEasingFunc::Type> easingFunc);
    
};

