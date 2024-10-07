#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ManagedStreamableLevelBatchHandle.h"
#include "StreamingVolumeManager.generated.h"

class AStreamingVolume;

UCLASS(BlueprintType)
class LEVELSTREAMING_API UStreamingVolumeManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShownBeforeHideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HiddenBeforeUnloadTime;
    
    UPROPERTY(Transient)
    TArray<AStreamingVolume*> RegisteredVolumes;
    
    UPROPERTY(Transient)
    TArray<FManagedStreamableLevelBatchHandle> ManagedBatches;
    
public:
    UStreamingVolumeManager();

    UFUNCTION(Exec)
    void StreamingVolumeManager_TestEnable();
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_PrintDebug();
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_DrawSmartDebug();
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_DrawSingleDebug();
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_DrawSingle_PreviousVolume();
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_DrawSingle_NextVolume();
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_DrawSingle_IndexVolume(int32 InVolumeIndexToDraw);
    
    UFUNCTION(Exec)
    void StreamingVolumeManager_DebugInstantMode();
    
};

