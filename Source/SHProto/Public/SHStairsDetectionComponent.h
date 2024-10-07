#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHStairsDetectionComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHStairsDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USHStairsDetectionComponent(const FObjectInitializer& ObjectInitializer);

};

