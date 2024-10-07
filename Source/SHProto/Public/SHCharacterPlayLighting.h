#pragma once
#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "SHCharacterPlayLightingBase.h"
#include "SHCharacterPlayLighting.generated.h"

class UCurveFloat;
class UPointLightComponent;
class USpotLightComponent;

UCLASS()
class SHPROTO_API ASHCharacterPlayLighting : public ASHCharacterPlayLightingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* LightCharacterBack;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* LightCharacterFace;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* LightCharacterSide;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPointLightComponent* FlashlightOffSupportLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightCharacterBackMinIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightCharacterBackFlashlightMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightCharacterBackCastShadowsWhenMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightCharacterBackCastShadowsWhenFlashlightMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightCharacterFaceMinIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightCharacterFaceFlashlightMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightCharacterFaceCastShadowsWhenMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightCharacterFaceCastShadowsWhenFlashlightMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightCharacterSideMinIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightCharacterSideFlashlightMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightCharacterSideCastShadowsWhenMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightCharacterSideCastShadowsWhenFlashlightMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlashlightOffSupportLightDefaultIntensity;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* FlashlightOffSupportLightIntensityCurve;
    
    UPROPERTY()
    FTimeline FlashlightOffSupportLightIntensityTimeline;
    
public:
    ASHCharacterPlayLighting(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void SetFlashlightOffSupportLightProgress(float ProgressValue);
    
};

