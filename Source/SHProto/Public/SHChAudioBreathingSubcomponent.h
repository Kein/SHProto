#pragma once
#include "CoreMinimal.h"
#include "SHCharacterAudioSubcomponentBase.h"
#include "SHChAudioBreathingSubcomponent.generated.h"

class USHAudioBreathingSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHChAudioBreathingSubcomponent : public USHCharacterAudioSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAudioBreathingSettings* Settings;
    
public:
    USHChAudioBreathingSubcomponent();

};

