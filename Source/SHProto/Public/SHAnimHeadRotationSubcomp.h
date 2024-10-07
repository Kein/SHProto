#pragma once
#include "CoreMinimal.h"
#include "SHAnimHeadRotationBaseSubcomp.h"
#include "SHAnimHeadRotationSubcomp.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHAnimHeadRotationSubcomp : public USHAnimHeadRotationBaseSubcomp {
    GENERATED_BODY()
public:
    USHAnimHeadRotationSubcomp();

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_Anim_HeadRotation_ValuesDebug();
    
};

