#pragma once
#include "CoreMinimal.h"
#include "LocalFogVolumeActor.h"
#include "SHLocalFogVolumetricActor.generated.h"

class UObject;

UCLASS()
class SHPROTO_API ASHLocalFogVolumetricActor : public ALocalFogVolumeActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseCameraInsteadOfPlayerLocation;
    
public:
    ASHLocalFogVolumetricActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled, const UObject* Object);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableStateChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

