#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "BlooberAkComponent.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLOOBERWWISE_API UBlooberAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UBlooberAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 SimplePostAssociatedAkEvent();
    
    UFUNCTION(BlueprintCallable)
    int32 SimplePostAkEvent(UAkAudioEvent* InEvent);
    
    UFUNCTION(BlueprintCallable)
    void EnableDynamicTick();
    
};

