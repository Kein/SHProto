#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHPushNClimbDesiredSpot.generated.h"

class ASHPushNClimbDesiredSpot;
class USHSafeBeginPlayComponent;

UCLASS(Abstract)
class SHPROTO_API ASHPushNClimbDesiredSpot : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHPushNClimbDesiredSpotEvent, ASHPushNClimbDesiredSpot*, DesiredSpot);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSafeBeginPlayComponent* SafeBeginPlayComponent;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AActor* ManagedActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D LocalLocationTolerance;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushNClimbDesiredSpotEvent ManagedActorReachedDesiredSpotEvent;
    
public:
    ASHPushNClimbDesiredSpot(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RelayAppliedManagedActorState(bool bIsInDesiredSpotState, bool bInstantApply);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsManagedActorInDesiredSpot() const;
    
};

