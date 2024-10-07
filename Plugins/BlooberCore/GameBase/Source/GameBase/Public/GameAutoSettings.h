#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameAutoSettings.generated.h"

UCLASS(DefaultConfig, Config=Version)
class GAMEBASE_API UGameAutoSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, VisibleDefaultsOnly)
    int32 Revision;
    
    UPROPERTY(Config, VisibleDefaultsOnly)
    FString Stream;
    
    UPROPERTY(Config, VisibleDefaultsOnly)
    FString PackageName;
    
    UPROPERTY(Config, VisibleDefaultsOnly)
    FString Archive;
    
    UGameAutoSettings();

};

