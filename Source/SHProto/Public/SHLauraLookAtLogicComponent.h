#pragma once
#include "CoreMinimal.h"
#include "SHCharacterLookAtLogicComponent.h"
#include "SHLauraLookAtLogicComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHLauraLookAtLogicComponent : public USHCharacterLookAtLogicComponent {
    GENERATED_BODY()
public:
    USHLauraLookAtLogicComponent(const FObjectInitializer& ObjectInitializer);

};

