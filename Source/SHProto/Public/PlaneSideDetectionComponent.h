#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ESHDetectionPlaneType.h"
#include "ESHDetectionSide.h"
#include "PlaneSideDetectionComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlaneSideDetectionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPlaneSideDetectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    ESHDetectionSide CalculateSide(const ESHDetectionPlaneType Plane, const FVector& Location) const;
    
};

