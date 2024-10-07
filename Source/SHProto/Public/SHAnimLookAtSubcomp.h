#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimLookAtSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimLookAtSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FRotator HeadRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float LookAlpha;
    
    USHAnimLookAtSubcomp();

};

