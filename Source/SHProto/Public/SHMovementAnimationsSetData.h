#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "SHMovementAnimationsSetData.generated.h"

class UAnimInstance;

UCLASS(BlueprintType)
class SHPROTO_API USHMovementAnimationsSetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> LocomotionAnimationBP;
    
    USHMovementAnimationsSetData();

};

