#pragma once
#include "CoreMinimal.h"
#include "MaiCharacterMovementComponent.h"
#include "SHAICharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAICharacterMovementComponent : public UMaiCharacterMovementComponent {
    GENERATED_BODY()
public:
    USHAICharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

