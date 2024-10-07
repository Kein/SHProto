#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTargetProvider.h"
#include "SHAngelaLookAtTargetProvider.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHAngelaLookAtTargetProvider : public USHLookAtTargetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngle;
    
    USHAngelaLookAtTargetProvider();

};

