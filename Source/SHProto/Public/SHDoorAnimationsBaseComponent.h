#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHDoorAnimationsBaseComponent.generated.h"

class USHCharacterPlayCombatComponent;
class USHDoorAnimationsBaseComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHDoorAnimationsBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorAnimationsBaseEventBP, USHDoorAnimationsBaseComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorAnimationsBaseEvent, USHDoorAnimationsBaseComponent*, Component);
    
    USHDoorAnimationsBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void HandleReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp);
    
};

