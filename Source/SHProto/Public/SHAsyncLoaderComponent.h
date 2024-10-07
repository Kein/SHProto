#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHAsyncLoadedObjectCache.h"
#include "SHAsyncLoaderComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAsyncLoaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FSHAsyncLoadedObjectCache> LoadedObjects;
    
    UPROPERTY()
    TArray<FSHAsyncLoadedObjectCache> LoadedSolidObjects;
    
    UPROPERTY()
    TArray<FSHAsyncLoadedObjectCache> LoadedCutsceneObjects;
    
public:
    USHAsyncLoaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_AsyncLoader_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_AsyncLoader_ToggleSpam();
    
    UFUNCTION(Exec)
    void SHDebug_AsyncLoader_DumpValues();
    
};

