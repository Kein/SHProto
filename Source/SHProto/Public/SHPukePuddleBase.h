#pragma once
#include "CoreMinimal.h"
#include "SHSystemFXBase.h"
#include "SHPukePuddleBase.generated.h"

class UMaterialInterface;

UCLASS(Abstract)
class ASHPukePuddleBase : public ASHSystemFXBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _CloseDistDecalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _ActivePhaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DeactivatePhaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* _StaticDecalMaterial;
    
public:
    ASHPukePuddleBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPuddleDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPuddleActivated();
    
public:
    UFUNCTION(BlueprintPure)
    float GetPuddleRadius() const;
    
};

