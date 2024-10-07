#pragma once
#include "CoreMinimal.h"
#include "Components/LineBatchComponent.h"
#include "MaiShapeDrawer.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiShapeDrawer : public ULineBatchComponent {
    GENERATED_BODY()
public:
    UMaiShapeDrawer(const FObjectInitializer& ObjectInitializer);

};

