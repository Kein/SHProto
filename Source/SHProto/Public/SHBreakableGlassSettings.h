#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SHBreakableGlassNoiseConfig.h"
#include "SHBreakableGlassSettings.generated.h"

class USHBreakableGlassFXData;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class USHBreakableGlassSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USHBreakableGlassFXData> MainGlassFX;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSHBreakableGlassNoiseConfig MainGlassNoiseConfig;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USHBreakableGlassFXData> ShardGlassFX;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSHBreakableGlassNoiseConfig ShardGlassNoiseConfig;
    
public:
    USHBreakableGlassSettings();

};

