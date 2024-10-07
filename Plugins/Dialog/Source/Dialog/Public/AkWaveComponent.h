#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "AkWaveComponent.generated.h"

class USoundWave;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UAkWaveComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundWave* _Wave;
    
    UAkWaveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void StopWave();
    
    UFUNCTION()
    void PlayWave();
    
};

