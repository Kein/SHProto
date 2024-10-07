#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "StreamableLevelBatchHandle.h"
#include "StreamingVolume.generated.h"

class UBoxComponent;
class UObject;
class UStreamingVolumeManager;

UCLASS()
class LEVELSTREAMING_API AStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* PreloadBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePreload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStreamableLevelBatchHandle> Requests;
    
    AStreamingVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool Enable, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
protected:
    UFUNCTION()
    UStreamingVolumeManager* GetStreamingVolumeManager();
    
};

