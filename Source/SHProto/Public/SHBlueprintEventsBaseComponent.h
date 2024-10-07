#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHBlueprintEventsBaseComponent.generated.h"

class ASHCharacterPlay;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHBlueprintEventsBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* Character;
    
public:
    USHBlueprintEventsBaseComponent(const FObjectInitializer& ObjectInitializer);

};

