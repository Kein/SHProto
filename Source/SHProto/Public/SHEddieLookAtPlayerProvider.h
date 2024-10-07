#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTargetProvider.h"
#include "SHEddieLookAtPlayerProvider.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHEddieLookAtPlayerProvider : public USHLookAtTargetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngle;
    
    USHEddieLookAtPlayerProvider();

};

