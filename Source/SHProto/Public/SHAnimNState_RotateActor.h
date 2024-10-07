#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNState_RotateActor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNState_RotateActor : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector VectorToRotate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MoveSpeed;
    
    USHAnimNState_RotateActor();

};

