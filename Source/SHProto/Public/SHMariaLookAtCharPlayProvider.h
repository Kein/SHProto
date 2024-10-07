#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTargetProvider.h"
#include "SHMariaLookAtCharPlayProvider.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHMariaLookAtCharPlayProvider : public USHLookAtTargetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngle;
    
    USHMariaLookAtCharPlayProvider();

};

