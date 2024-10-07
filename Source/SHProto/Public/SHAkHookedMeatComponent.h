#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "SHAkDynamicTickComponent.h"
#include "SHAkHookedMeatComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, Within=SHHookedMeatBase, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkHookedMeatComponent : public USHAkDynamicTickComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* BurstAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* SwingAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* VelocityRTPC;
    
    UPROPERTY(EditAnywhere)
    bool bDebug;
    
public:
    USHAkHookedMeatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlaySwingAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayBurstAudioEvent();
    
protected:
    UFUNCTION()
    void OnSkeletalComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

