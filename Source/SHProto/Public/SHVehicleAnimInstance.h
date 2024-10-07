#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "SHVehicleAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInstantGetIn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFinishInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsMovementBlocked;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CurrentInputValue;
    
public:
    USHVehicleAnimInstance();

};

