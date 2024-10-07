#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReticleTextureConfig.h"
#include "SHCrosshairWidgetBase.h"
#include "SHCrosshairWidget.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UTexture2D;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHCrosshairWidget : public USHCrosshairWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UImage* CrosshairImage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCrosshairAtlasUseInterpolation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ReticleSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FReticleTextureConfig ReticleTextureConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FReticleTextureConfig MinimalReticleTextureConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FriendlyAimOpacity;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* CrosshairDynamicMaterial;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UTexture2D> CurrentlyUsedCrosshairTextureSoft;
    
    UPROPERTY(Transient)
    UWidgetAnimation* CurrentPlayingAnimation;
    
public:
    USHCrosshairWidget();

protected:
    UFUNCTION()
    void OnAnimFinished();
    
};

