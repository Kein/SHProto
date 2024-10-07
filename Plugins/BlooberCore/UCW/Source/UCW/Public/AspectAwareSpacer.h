#pragma once
#include "CoreMinimal.h"
#include "Components/Spacer.h"
#include "EAspectAwareFrameType.h"
#include "AspectAwareSpacer.generated.h"

UCLASS()
class UCW_API UAspectAwareSpacer : public USpacer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAspectAwareFrameType FillInType;
    
public:
    UAspectAwareSpacer();

};

