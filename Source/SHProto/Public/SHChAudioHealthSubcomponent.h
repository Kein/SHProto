#pragma once
#include "CoreMinimal.h"
#include "SHCharacterAudioSubcomponentBase.h"
#include "SHChAudioHealthSubcomponent.generated.h"

class UObject;
class USHAudioHealthSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHChAudioHealthSubcomponent : public USHCharacterAudioSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAudioHealthSettings* Settings;
    
public:
    USHChAudioHealthSubcomponent();

    UFUNCTION(BlueprintCallable)
    void RequestDeathHealthState(UObject* Requester);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseDeathHealthState();
    
};

