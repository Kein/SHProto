#pragma once
#include "CoreMinimal.h"
#include "EnviroFrontHitEventSettings.h"
#include "EnviroSideHitEventSettings.h"
#include "SHAnimSubcompSettings.h"
#include "SHAnimEnviroHitReactionsSubcompSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHAnimEnviroHitReactionsSubcompSettings : public FSHAnimSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName IgnoreActorsWithTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<AActor>> IgnoredActorClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnviroFrontHitEventSettings EnviroFrontHitEventSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnviroSideHitEventSettings EnviroSideHitEventSettings;
    
    FSHAnimEnviroHitReactionsSubcompSettings();
};

