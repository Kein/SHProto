#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MaiLightObserverChangeDelegate.h"
#include "MaiLightingStateDelegate.h"
#include "MaiLightObserver.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiLightObserver : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _Radius;
    
    UPROPERTY(EditAnywhere)
    float _HalfHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool _Enabled;
    
    UPROPERTY(VisibleAnywhere)
    bool _IsLit;
    
    UPROPERTY(BlueprintAssignable)
    FMaiLightObserverChange LightObserverChange;
    
    UPROPERTY(BlueprintAssignable)
    FMaiLightingState LightingState;
    
    UMaiLightObserver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TurnOn();
    
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsLit() const;
    
};

