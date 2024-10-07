#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNState_FallingState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNState_FallingState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CheckDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector VectorToRotate;
    
    USHAnimNState_FallingState();

};

