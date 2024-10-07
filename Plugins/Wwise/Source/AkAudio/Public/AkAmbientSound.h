#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkAmbientSound.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS()
class AKAUDIO_API AAkAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool StopWhenOwnerIsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool AutoPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool AsyncPost;
    
    AAkAmbientSound(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSoundAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSound();
    
    UFUNCTION()
    void AsyncPlayCompletion();
    
};

