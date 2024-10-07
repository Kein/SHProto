#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHAudioInteractionSettings.generated.h"

class UAkAudioEvent;

UCLASS(BlueprintType)
class SHPROTO_API USHAudioInteractionSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* FocusableOnSolvedAudioEvent;
    
    USHAudioInteractionSettings();

};

