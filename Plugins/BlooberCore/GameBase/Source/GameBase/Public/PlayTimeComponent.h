#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayTimeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASE_API UPlayTimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayTimeComponent(const FObjectInitializer& ObjectInitializer);

};

