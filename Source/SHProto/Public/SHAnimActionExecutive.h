#pragma once
#include "CoreMinimal.h"
#include "SHAnimActionExecutiveBase.h"
#include "SHAnimActionExecutive.generated.h"

class USHAnimMontagePlayer;

UCLASS(EditInlineNew)
class SHPROTO_API USHAnimActionExecutive : public USHAnimActionExecutiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAnimMontagePlayer* AnimPlayer;
    
public:
    USHAnimActionExecutive();

    UFUNCTION(BlueprintPure)
    USHAnimMontagePlayer* GetAnimPlayer() const;
    
};

