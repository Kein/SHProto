#pragma once
#include "CoreMinimal.h"
#include "SHCharacterLookAtLogicComponent.h"
#include "SHEddieLookAtLogicComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEddieLookAtLogicComponent : public USHCharacterLookAtLogicComponent {
    GENERATED_BODY()
public:
    USHEddieLookAtLogicComponent(const FObjectInitializer& ObjectInitializer);

};

