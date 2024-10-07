#pragma once
#include "CoreMinimal.h"
#include "EMaiParty.h"
#include "EPartyAttitude.h"
#include "MaiPartyAttitudeData.generated.h"

USTRUCT(BlueprintType)
struct FMaiPartyAttitudeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMaiParty _Party1;
    
    UPROPERTY(EditAnywhere)
    EMaiParty _Party2;
    
    UPROPERTY(EditAnywhere)
    EPartyAttitude _Attitude;
    
    UPROPERTY(EditAnywhere)
    bool _Mirrored;
    
    MAI_API FMaiPartyAttitudeData();
};

