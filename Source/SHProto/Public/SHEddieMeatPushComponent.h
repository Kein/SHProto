#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHEddieMeatPushComponent.generated.h"

class ASHMeatConveyorBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEddieMeatPushComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverlapUpdateRate;
    
    UPROPERTY(BlueprintReadWrite)
    ASHMeatConveyorBase* MeatConveyorRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BBMeatActorKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BBAttackPositionKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BBLockAttMeatKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BBShouldPushLeftKey;
    
public:
    USHEddieMeatPushComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessPlayerCharacterInWorkAreaTick();
    
};

