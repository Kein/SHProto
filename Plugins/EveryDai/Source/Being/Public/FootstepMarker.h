#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FootstepMarker.generated.h"

class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UFootstepMarker : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MarkerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UFootstepMarker(const FObjectInitializer& ObjectInitializer);

};

