#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHDeathPlayerFinishPostProcessData.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHDeathPlayer.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHDeathPlayer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSHDeathPlayerFinishPostProcessData FinishPostProcessData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayerCharacterEnsureNoEquippedWeapon;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> FinishPostProcessMaterialHandlers;
    
public:
    ASHDeathPlayer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void HandleCameraAnimStopped();
    
    UFUNCTION()
    void HandleCameraAnimBlendOut();
    
};

