#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHItemAudioComponent.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHItemAudioComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* GrabSound;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* HideSound;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* FlipSound;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* InvestigateSound;
    
    UPROPERTY(Transient)
    UAkSwitchValue* SavedSwitchValue;
    
public:
    USHItemAudioComponent(const FObjectInitializer& ObjectInitializer);

};

