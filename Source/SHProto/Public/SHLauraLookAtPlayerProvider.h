#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTargetProvider.h"
#include "SHLauraLookAtPlayerProvider.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHLauraLookAtPlayerProvider : public USHLookAtTargetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngle;
    
    USHLauraLookAtPlayerProvider();

};

