#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHFogManager.generated.h"

class ASHFogCutoutActor;
class ASHLocalFogVolumetricActor;
class UMaterialParameterCollection;
class USHGameInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFogManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* FogMPCAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> FogGridSizeZToScaleAdd;
    
    UPROPERTY(Transient)
    TArray<ASHFogCutoutActor*> RegisteredFogCutoutActors;
    
    UPROPERTY(Transient)
    TArray<ASHLocalFogVolumetricActor*> RegisteredLocalFogVolumetricActors;
    
public:
    USHFogManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Fog_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Fog_DrawDebug();
    
    UFUNCTION()
    void OnRestoreWorldDependentSettingsNative(USHGameInstance* OutGameInstance);
    
};

