#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GlobalPropertiesSettings.generated.h"

class UGlobalPropertiesCollection;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class GLOBALPROPERTIES_API UGlobalPropertiesSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UGlobalPropertiesCollection> Properties;
    
public:
    UGlobalPropertiesSettings();

};

