#pragma once
#include "CoreMinimal.h"
#include "MaiAreaComponent.h"
#include "MaiDetectionAreaComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiDetectionAreaComponent : public UMaiAreaComponent {
    GENERATED_BODY()
public:
    UMaiDetectionAreaComponent(const FObjectInitializer& ObjectInitializer);

};

