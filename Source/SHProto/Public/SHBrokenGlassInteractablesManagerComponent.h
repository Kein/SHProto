#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SHBrokenGlassInteractablesManagerComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHBrokenGlassInteractablesManagerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USHBrokenGlassInteractablesManagerComponent(const FObjectInitializer& ObjectInitializer);

};

