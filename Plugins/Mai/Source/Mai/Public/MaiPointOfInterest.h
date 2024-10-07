#pragma once
#include "CoreMinimal.h"
#include "MaiActionPoint.h"
#include "MaiPointOfInterest.generated.h"

class UMaiDetectionAreaComponent;

UCLASS()
class MAI_API AMaiPointOfInterest : public AMaiActionPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiDetectionAreaComponent* _DetectionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Cooldown;
    
    AMaiPointOfInterest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchOnFor(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SwitchOn();
    
    UFUNCTION(BlueprintCallable)
    void SwitchOff();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisable();
    
};

