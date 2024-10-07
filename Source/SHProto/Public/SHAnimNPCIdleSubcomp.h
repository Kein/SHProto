#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimNPCIdleSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimNPCIdleSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float IdlePlayRate;
    
public:
    USHAnimNPCIdleSubcomp();

    UFUNCTION(BlueprintCallable)
    void OnIdleLoopEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomIdleEnter();
    
    UFUNCTION(BlueprintPure)
    bool GetShouldPlayCustomIdle() const;
    
};

