#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCharacterPlayInteractionSlotComponent.generated.h"

class ASHCharacterPlay;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayInteractionSlotComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCharacterPlayInteractionSlotComponent(const FObjectInitializer& ObjectInitializer);

};

