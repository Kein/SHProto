#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "SHWeaponManageCmbSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHWeaponManageCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDataTableRowHandle> MeleeWeaponsOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDataTableRowHandle> RangedWeaponsOrder;
    
    USHWeaponManageCmbSubcompSettings();

};

