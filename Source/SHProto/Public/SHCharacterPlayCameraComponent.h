#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHBlendData.h"
#include "SHCameraComponent.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHCharacterPlayCameraComponent.generated.h"

class ASHCharacterPlay;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class USHCameraFOVBlender;
class USHCameraPostProcessBlender;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayCameraComponent : public USHCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FOVInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableHideOwnerIfTooClose;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TMap<UObject*, float> FOVAdditiveMapings;
    
    UPROPERTY(Transient)
    TArray<USHCameraFOVBlender*> FOVBlenders;
    
    UPROPERTY(Transient)
    TArray<USHCameraPostProcessBlender*> PostProcessBlenders;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> SimpleBlendableEffects;
    
public:
    USHCharacterPlayCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_CameraComponent_ValuesDebug();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFOVBlend(const UObject* Object, const bool Instant);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* PlaySimpleBlendableEffect(const UObject* Object, UMaterialInterface* InPostprocessMaterial, FName InEffectMaterialParamName, float InEffectTime);
    
    UFUNCTION(BlueprintPure)
    bool IsLookingAt(const FVector InWorldLoc, float PitchAngleTolerance, float YawAngleTolerance);
    
    UFUNCTION(BlueprintPure)
    bool HasFOVBlend(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    USHCameraFOVBlender* FindFOVBlender(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    FRotator CalcLookingAtDelta(const FVector InWorldLoc);
    
    UFUNCTION(BlueprintCallable)
    USHCameraFOVBlender* AddFOVBlend(const UObject* Object, const FString& BlendName, const FSHBlendData& BlendConfig, const float FOVValue);
    
};

