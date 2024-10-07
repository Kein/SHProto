#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimNurseHeadShakeSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimNurseHeadShakeSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    USHAnimNurseHeadShakeSubcomp();

    UFUNCTION(BlueprintCallable)
    void OnHeadShakeStart();
    
    UFUNCTION(BlueprintCallable)
    void OnHeadShakeFinish();
    
};

