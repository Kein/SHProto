#pragma once
#include "CoreMinimal.h"
#include "ESHAudioCubatureEnum.h"
#include "ESHAudioWorldEnum.h"
#include "SHCharacterAudioSubcomponentBase.h"
#include "SHChAudioSpaceSubcomponent.generated.h"

class USHAudioSpaceSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHChAudioSpaceSubcomponent : public USHCharacterAudioSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAudioSpaceSettings* Settings;
    
    UPROPERTY(Transient)
    ESHAudioCubatureEnum CurrentAudioCubature;
    
    UPROPERTY(Transient)
    ESHAudioWorldEnum CurrentAudioWorld;
    
public:
    USHChAudioSpaceSubcomponent();

};

