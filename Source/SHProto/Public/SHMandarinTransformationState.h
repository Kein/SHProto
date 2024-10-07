#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHMandarinTransformationState.h"
#include "SHEnemyTransformationState.h"
#include "SHMandarinTransformationState.generated.h"

UCLASS()
class SHPROTO_API USHMandarinTransformationState : public USHEnemyTransformationState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESHMandarinTransformationState MandarinTransformationState;
    
    UPROPERTY(EditAnywhere)
    FVector TransformationStateHeightOffset;
    
public:
    USHMandarinTransformationState();

    UFUNCTION(BlueprintPure)
    FVector GetTransformationStateHeightOffset() const;
    
    UFUNCTION(BlueprintPure)
    ESHMandarinTransformationState GetMandarinTransformationState() const;
    
};

