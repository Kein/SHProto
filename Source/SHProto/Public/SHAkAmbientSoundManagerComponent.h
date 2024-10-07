#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHAkAmbientSoundManagerComponent.generated.h"

class ASHAkAmbientSound;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkAmbientSoundManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHAkAmbientSound*> RegisteredAkAmbientSounds;
    
public:
    USHAkAmbientSoundManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Ak_AmbientSoundManager_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Ak_AmbientSoundManager_DrawDebug();
    
};

