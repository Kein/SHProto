#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MaiPartyAttitudeData.h"
#include "MaiPartyData.h"
#include "MaiTokenData.h"
#include "MaiWallNavGeneration.h"
#include "MaiSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MAI_API UMaiSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 _PartiesCount;
    
    UPROPERTY(Config, EditAnywhere, EditFixedSize)
    TArray<FMaiPartyData> _Parties;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FMaiPartyAttitudeData> _Attitudes;
    
    UPROPERTY(Config, EditAnywhere)
    int32 _TokenTypesCount;
    
    UPROPERTY(Config, EditAnywhere, EditFixedSize)
    TArray<FMaiTokenData> _TokenTypes;
    
    UPROPERTY(Config, EditAnywhere)
    FMaiWallNavGeneration _GenConfig;
    
    UMaiSettings();

};

