#pragma once
#include "CoreMinimal.h"
#include "MaiAreaComponent.h"
#include "MaiChaseAreaComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiChaseAreaComponent : public UMaiAreaComponent {
    GENERATED_BODY()
public:
    UMaiChaseAreaComponent(const FObjectInitializer& ObjectInitializer);

};

