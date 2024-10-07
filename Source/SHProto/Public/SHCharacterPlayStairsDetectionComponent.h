#pragma once
#include "CoreMinimal.h"
#include "SHStairsDetectionComponent.h"
#include "SHCharacterPlayStairsDetectionComponent.generated.h"

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayStairsDetectionComponent : public USHStairsDetectionComponent {
    GENERATED_BODY()
public:
    USHCharacterPlayStairsDetectionComponent(const FObjectInitializer& ObjectInitializer);

};

