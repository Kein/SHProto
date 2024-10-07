#pragma once
#include "CoreMinimal.h"
#include "SHCharacterLookAtLogicComponent.h"
#include "SHMariaLookAtLogicComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMariaLookAtLogicComponent : public USHCharacterLookAtLogicComponent {
    GENERATED_BODY()
public:
    USHMariaLookAtLogicComponent(const FObjectInitializer& ObjectInitializer);

};

