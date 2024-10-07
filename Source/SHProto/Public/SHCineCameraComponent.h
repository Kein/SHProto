#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "SHCineCameraComponent.generated.h"

class ACharacter;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool RespectFilmbackAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool WideScreenAdjustFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldAnamorphism;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomShape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensDIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensDIntensityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensDIntensityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensDCenterX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensDCenterY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensDScale;
    
    USHCineCameraComponent();

    UFUNCTION(BlueprintCallable)
    void TrackSkeletalMeshBone(USkeletalMeshComponent* InComponent, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void TrackComponent(USceneComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void TrackCharacterBone(ACharacter* InCharacter, FName InCharacterBoneName);
    
};

