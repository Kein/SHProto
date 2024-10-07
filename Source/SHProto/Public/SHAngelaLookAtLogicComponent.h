#pragma once
#include "CoreMinimal.h"
#include "SHCharacterLookAtLogicComponent.h"
#include "SHAngelaLookAtLogicComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAngelaLookAtLogicComponent : public USHCharacterLookAtLogicComponent {
    GENERATED_BODY()
public:
    USHAngelaLookAtLogicComponent(const FObjectInitializer& ObjectInitializer);

};

