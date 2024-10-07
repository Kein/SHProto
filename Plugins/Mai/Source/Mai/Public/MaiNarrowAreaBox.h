#pragma once
#include "CoreMinimal.h"
#include "MaiNavBox.h"
#include "MaiNarrowAreaBox.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMaiNarrowAreaBox : public UMaiNavBox {
    GENERATED_BODY()
public:
    UMaiNarrowAreaBox(const FObjectInitializer& ObjectInitializer);

};

