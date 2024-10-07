#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "ForceFeedbackEffectEx.generated.h"

class UAkAudioEvent;

UCLASS(MinimalAPI)
class UForceFeedbackEffectEx : public UForceFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* MotionEvent;
    
    UForceFeedbackEffectEx();

};

