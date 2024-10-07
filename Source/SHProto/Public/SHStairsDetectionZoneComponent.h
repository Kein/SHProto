#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SHStairsDetectionZoneComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHStairsDetectionZoneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Extent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    USHStairsDetectionZoneComponent(const FObjectInitializer& ObjectInitializer);

};

