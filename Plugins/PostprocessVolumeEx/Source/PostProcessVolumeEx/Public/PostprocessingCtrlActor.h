#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AtmoCtrlMaterialInstanceDynamicCached.h"
#include "AtmospherePresetDataEx.h"
#include "SHPostprocessSkyBox.h"
#include "SHPostprocessWindData.h"
#include "PostprocessingCtrlActor.generated.h"

class APostprocessingCtrlActor;
class UAtmosphereDOFFactorDA;
class UAtmosphereVCloudsCtrl;
class UDataTable;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UObject;
class USkyAtmosphereComponent;
class USkyLightComponent;
class UStaticMeshComponent;
class UTexture2D;
class UVolumetricCloudComponent;

UCLASS(NotPlaceable, Transient)
class POSTPROCESSVOLUMEEX_API APostprocessingCtrlActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UDataTable* CachedAtmospheresDatatable;
    
    UPROPERTY(Transient)
    UDataTable* CachedPresetsOverridesDatatable;
    
    UPROPERTY(Transient)
    FAtmoCtrlMaterialInstanceDynamicCached LensDistortion;
    
    UPROPERTY(Transient)
    FAtmoCtrlMaterialInstanceDynamicCached MagicLight;
    
    UPROPERTY(Transient)
    FAtmoCtrlMaterialInstanceDynamicCached FogDarkeningMaterialDynamic;
    
    UPROPERTY(Transient)
    FAtmoCtrlMaterialInstanceDynamicCached VCloudsMaterialDynamic[2];
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> SkyboxDynamics;
    
    UPROPERTY(Instanced, Transient)
    UDirectionalLightComponent* DirectionalLight;
    
    UPROPERTY(Instanced, Transient)
    UDirectionalLightComponent* DirectionalAmbient;
    
    UPROPERTY(Instanced, Transient)
    UExponentialHeightFogComponent* ExpHeightFog;
    
    UPROPERTY(Instanced, Transient)
    USkyAtmosphereComponent* AtmSky;
    
    UPROPERTY(Instanced, Transient)
    USkyLightComponent* SkyLight;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* Skybox;
    
    UPROPERTY(Instanced, Transient)
    UAtmosphereVCloudsCtrl* VCloudsCtrl;
    
    UPROPERTY(Instanced, Transient)
    UVolumetricCloudComponent* VClouds;
    
    UPROPERTY(Transient)
    FSHPostprocessSkyBox CachedSkyBox;
    
    UPROPERTY(Transient)
    float InterpolatedDayNightFactor;
    
    UPROPERTY(Transient)
    UNiagaraParameterCollectionInstance* NiagaraParametersCollectionInstance;
    
    UPROPERTY(Transient)
    FVector PlayerPosition;
    
    UPROPERTY(Transient)
    FVector PreviousPlayerPosition;
    
    UPROPERTY(Transient)
    FAtmospherePresetDataEx OverrideData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FogDarkeningMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* LensDistortionMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* MagicLightMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> SkyMaterials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> VCloudMaterialsSRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* DefaultWeatherTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* DefaultGradientTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SkyRecaptureFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* ParametersCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* TranslucencyParametersCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraParameterCollection* NiagaraParametersCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SSSDayNightFactorMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SSSDayNightFactorMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FUZZDayNightFactorMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FUZZDayNightFactorMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BCKLGHDayNightFactorMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BCKLGHDayNightFactorMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAtmosphereDOFFactorDA* AtmosphereDOFFogScalingFactors;
    
    APostprocessingCtrlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverrideWindParameters(bool State, FSHPostprocessWindData Wind);
    
    UFUNCTION(BlueprintCallable)
    void OverrideGlobalSettins(const FAtmospherePresetDataEx& Data, bool DoOverride, bool DisableSubVolumesDuringOverride);
    
    UFUNCTION(BlueprintPure)
    FSHPostprocessWindData GetLastWindData() const;
    
    UFUNCTION(BlueprintPure)
    float GetDayNightFactor() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APostprocessingCtrlActor* GetAtmosphereController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnableContactShadows();
    
    UFUNCTION(BlueprintCallable)
    void DisableContactShadows();
    
};

