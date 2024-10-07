#pragma once
#include "CoreMinimal.h"
#include "Components/Spacer.h"
#include "ESHAspectAwareFrameType.h"
#include "SHAspectAwareSpacer.generated.h"

UCLASS()
class SHPROTO_API USHAspectAwareSpacer : public USpacer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHAspectAwareFrameType FillInType;
    
    USHAspectAwareSpacer();

};

