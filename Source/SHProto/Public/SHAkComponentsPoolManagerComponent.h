#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHAkComponentsPoolManagerComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UObject;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkComponentsPoolManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UAkComponent*> AvailableComponentsPool;
    
    UPROPERTY(Instanced, Transient)
    TArray<UAkComponent*> TakenComponentsPool;
    
public:
    USHAkComponentsPoolManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Ak_ComponentsPoolManager_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Ak_ComponentsPoolManager_DrawDebug();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PostPooledAkEvent(UObject* WorldContextObject, USceneComponent* InComp, FName InSocket, UAkAudioEvent* AudioEvent);
    
};

