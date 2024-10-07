#pragma once
#include "CoreMinimal.h"
#include "SHMovementDataStruct.h"
#include "SHWeaponMovementSet.generated.h"

USTRUCT(BlueprintType)
struct FSHWeaponMovementSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMovementDataStruct EquipedMovementData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMovementDataStruct EquipedLowHealthMovementData;
    
    SHPROTO_API FSHWeaponMovementSet();
};

