#pragma once
#include "CoreMinimal.h"
#include "MaiCuriosityComponent.h"
#include "MaiInterestedComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiInterestedComponent : public UMaiCuriosityComponent {
    GENERATED_BODY()
public:
    UMaiInterestedComponent(const FObjectInitializer& ObjectInitializer);

};

