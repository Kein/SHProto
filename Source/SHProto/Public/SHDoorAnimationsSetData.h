#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHDoorAnimationsBaseSetData.h"
#include "SHDoorAnimationsSetData.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class SHPROTO_API USHDoorAnimationsSetData : public USHDoorAnimationsBaseSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FPlayAnimationData> OpenWalkAnims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FPlayAnimationData> OpenSprintAnims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FPlayAnimationData> AutoLockedDoorCheckAnims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* AutoLockedCheckCurveDoorMovementAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData MariaOpenWalkAnim;
    
    USHDoorAnimationsSetData();

};

