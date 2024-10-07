#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/TimelineComponent.h"
#include "SHFlashlightDefaultDataContainer.h"
#include "SHFlashlightDynamicDataContainer.h"
#include "SHFlashlightLookAtSettings.h"
#include "SHItemEquipment.h"
#include "SHMaterialPropertyControlData.h"
#include "SHFlashlight.generated.h"

class AActor;
class UCurveFloat;
class UMaiLightEmitter;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UPointLightComponent;
class URectLightComponent;
class USHAkFlashlightComponent;
class USHFlashlightMainLightOffsetBlender;
class USHFlashlightTransformProcessor;
class USceneComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHFlashlight : public ASHItemEquipment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* Lightshaft;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* LightMain;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    URectLightComponent* BackLight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPointLightComponent* CloseLight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* VeryCloseSpotlight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiLightEmitter* MaiLightEmitter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkFlashlightComponent* SHAkFlashlightComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor DefaultLightsColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultGlobalIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MainLightIntensityMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BackLightIntensityMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloseLightIntensityMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VeryCloseSpotlightIntensityMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMaterialPropertyControlData LightshaftMaterial0EdgeColorPropertyConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultLightshaftMaterial0EdgeColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMaterialPropertyControlData LightshaftMaterial0TintEmissionPropertyConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultLightshaftMaterial0TintEmission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMaterialPropertyControlData LightshaftMaterial1EdgeColorPropertyConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultLightshaftMaterial1EdgeColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMaterialPropertyControlData LightshaftMaterial1TintEmissionPropertyConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultLightshaftMaterial1TintEmission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterControlRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MainLightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DirectionInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimationMultiplayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraDistanceInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D CameraDistanceInterpModRanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinCameraDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightIntensityWithCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnOnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnOffTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightAtMonsterMainLightIntensityAddativeMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightAtMonsterCalmTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* LightAtMonsterFlickerCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightAtMonsterFlickerCooldownTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TraceMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpotUmbra;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpotPenumbra;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* ParametersCollection;
    
    UPROPERTY(Transient)
    USHFlashlightTransformProcessor* TransformProcessor;
    
    UPROPERTY(Transient)
    TArray<USHFlashlightMainLightOffsetBlender*> MainLightOffsetBlenders;
    
    UPROPERTY(Transient)
    UCurveFloat* LightIntensityCurve;
    
    UPROPERTY()
    FTimeline LightIntensityTimeline;
    
    UPROPERTY()
    FTimeline LightIntensityModTimeline;
    
    UPROPERTY()
    FSHFlashlightDynamicDataContainer CurrentDynamicData;
    
    UPROPERTY()
    FSHFlashlightDefaultDataContainer DefaultReferenceData;
    
public:
    ASHFlashlight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateLightAtMonster(AActor* Monster, float InLightingAlpha);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDustNiagara(UNiagaraComponent* InDustNiagara);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDustMaterial(UMaterialInstanceDynamic* InDustMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetMainLightOffsetSource(USceneComponent* NewMainLightOffsetSource);
    
protected:
    UFUNCTION()
    void SetLightIntensityProgress(float ProgressValue);
    
    UFUNCTION()
    void SetLightIntensityModProgress(float ModValue);
    
    UFUNCTION()
    void ProcessLightOn();
    
    UFUNCTION()
    void ProcessLightOff();
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayLightIntensityModAnimation(UCurveFloat* IntensityModCurve);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurnedOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurnedOff();
    
    UFUNCTION(BlueprintPure)
    float GetIntensityAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLightAtMonster(AActor* Monster);
    
    UFUNCTION(BlueprintCallable)
    void EnableLookAtComponent(USceneComponent* NewLookAtRef, const FSHFlashlightLookAtSettings& InLookAtSettings);
    
    UFUNCTION(BlueprintCallable)
    void DisableLookAt(bool InstantViewRotation, float AwaitTime);
    
    UFUNCTION(BlueprintCallable)
    void ClearMainLightOffsetSource();
    
    UFUNCTION(BlueprintCallable)
    void BeginsLightAtMonster(AActor* Monster);
    
};

