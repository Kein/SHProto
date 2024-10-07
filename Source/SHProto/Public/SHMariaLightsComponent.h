#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHMariaLightsComponent.generated.h"

class ASHMariaLightingActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHMariaLightsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASHMariaLightingActor> LightingActorClass;
    
public:
    USHMariaLightsComponent(const FObjectInitializer& ObjectInitializer);

};

