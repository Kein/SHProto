#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayLightsComponent.generated.h"

class ASHCharacterPlay;
class ASHCharacterPlayLightingBase;
class ASHFlashlightControlVolume;
class USHCharacterPlayLightingControlDataBlender;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayLightsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASHCharacterPlayLightingBase> LightingActorClass;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TArray<ASHFlashlightControlVolume*> FlashlightControlVolumes;
    
    UPROPERTY(Transient)
    ASHCharacterPlayLightingBase* LightingActor;
    
    UPROPERTY(Transient)
    TArray<USHCharacterPlayLightingControlDataBlender*> LightingControlDataBlenders;
    
public:
    USHCharacterPlayLightsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Lights_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Lights_Flashlight_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Lights_Flashlight_DrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Lights_DrawDebug();
    
};

