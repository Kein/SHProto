#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcomp.h"
#include "SHFXRaingWettingSubcomp.generated.h"

class UNiagaraComponent;
class UObject;
class USHFXRaingWettingSubcomp;

UCLASS(EditInlineNew)
class SHPROTO_API USHFXRaingWettingSubcomp : public USHFXMaterialModifierSubcomp {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHRainWettingFXEvent, USHFXRaingWettingSubcomp*, Component);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSHRainWettingFXEvent OnWetFactorChanged;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UNiagaraComponent> SpawnedRainDrippingNiagaraComponent;
    
public:
    USHFXRaingWettingSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetWetDryFactor(float InWetFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetWadingAltitudeWorld(float WadingHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetWadingAltitudeRelative(float WadingHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetRainSplashesBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRainingBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRainDripSpawnRate(float InSpawnRate);
    
    UFUNCTION(BlueprintCallable)
    void SetRainDrippingBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsRainSplashesBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainSplashesBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainingBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainingBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainDrippingBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainDrippingBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainDrippingActive();
    
    UFUNCTION(BlueprintPure)
    bool IsInRainZone() const;
    
    UFUNCTION(BlueprintPure)
    float GetWetDryFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetWadingAltitude() const;
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* GetSpawnedRainDrippingNiagaraComponent();
    
    UFUNCTION(BlueprintPure)
    float GetDripIntensityValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurvesEvaluateTimer() const;
    
};

