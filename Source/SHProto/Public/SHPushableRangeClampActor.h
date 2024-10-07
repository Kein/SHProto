#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHPushableRangeClampActor.generated.h"

class ASHPushableRangeClampActor;

UCLASS(Abstract)
class SHPROTO_API ASHPushableRangeClampActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHPushableRangeClampEvent, ASHPushableRangeClampActor*, ActorPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AActor* ManagedActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RangeClampLocal;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableRangeClampEvent ManagedActorLeftRange;
    
public:
    ASHPushableRangeClampActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RelayAppliedManagedActorState(bool bIsInDesiredSpotState, bool bInstantApply);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsManagedActorOutOfRange() const;
    
};

