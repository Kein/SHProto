#pragma once
#include "CoreMinimal.h"
#include "SHCharacterAudioSubcomponentBase.h"
#include "SHChAudioInteractionSubcomponent.generated.h"

class USHAudioInteractionSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHChAudioInteractionSubcomponent : public USHCharacterAudioSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAudioInteractionSettings* Settings;
    
public:
    USHChAudioInteractionSubcomponent();

};

