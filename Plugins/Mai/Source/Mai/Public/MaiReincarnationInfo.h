#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiReincarnationInfo.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiReincarnationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 _PreCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 _EnterCountToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FInt32Range _Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FInt32Range _HealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 _SeizuresNumber;
    
    FMaiReincarnationInfo();
};

