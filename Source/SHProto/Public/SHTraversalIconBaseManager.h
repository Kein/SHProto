#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHInteractionIconState.h"
#include "SHTraversalIconBaseManager.generated.h"

class USHInteractionIconComponent;
class USHTraversalBaseComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHTraversalIconBaseManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IconUnavailableOpacityMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    USHTraversalBaseComponent* AssignedTraversalComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    USHInteractionIconComponent* AssignedIconComponent;
    
public:
    USHTraversalIconBaseManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetForcedIconState(ESHInteractionIconState InForcedState);
    
    UFUNCTION(BlueprintCallable)
    void ResetForcedIconState();
    
    UFUNCTION(BlueprintCallable)
    void RegisterRequisites(USHTraversalBaseComponent* InTraversalComponent, USHInteractionIconComponent* InIconComponent);
    
protected:
    UFUNCTION()
    void ProcessObstacleTraversalUnavailableChangedEvent(USHTraversalBaseComponent* InTraversalComponent);
    
    UFUNCTION()
    void ProcessObstacleProximityLostCharacterEvent(USHTraversalBaseComponent* InTraversalComponent);
    
    UFUNCTION()
    void ProcessObstacleProximityFoundCharacterEvent(USHTraversalBaseComponent* InTraversalComponent);
    
};

