#pragma once
#include "CoreMinimal.h"
#include "SHCharacterAudioSubcomponentBase.h"
#include "SHChAudioStatesSubcomponent.generated.h"

class UObject;
class USHAudioStatesComponentSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHChAudioStatesSubcomponent : public USHCharacterAudioSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAudioStatesComponentSettings* Settings;
    
public:
    USHChAudioStatesSubcomponent();

    UFUNCTION(BlueprintCallable)
    void RequestBossFightState(bool bInState, const UObject* Requester);
    
};

