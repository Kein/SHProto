#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHAimDistruptorComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAimDistruptorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bWantDistrupt;
    
    UPROPERTY(EditAnywhere)
    float ReachFullEffectSeconds;
    
    UPROPERTY(EditAnywhere)
    float CrosshairDisplacementPixels;
    
    UPROPERTY(EditAnywhere)
    float CameraShake_FrequencyScale;
    
    UPROPERTY(EditAnywhere)
    float CameraShake_DisplacementScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D FocusPrepassMapping;
    
public:
    USHAimDistruptorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

