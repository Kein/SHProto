#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GsaNamedOption.h"
#include "GSAOptionsSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=GFXSettingsConfig)
class GAMEBASE_API UGSAOptionsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FGsaNamedOption> GsaOptions;
    
    UGSAOptionsSettings();

};

