#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcompSettings.h"
#include "SHAnimMovementSubcompSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHAnimMovementSubcompSettings : public FSHAnimSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DelayedStopLogicEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DelayedStopTimeWindow;
    
    FSHAnimMovementSubcompSettings();
};

