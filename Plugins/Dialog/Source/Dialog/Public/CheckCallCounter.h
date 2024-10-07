#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "ENumberCompareOperation.h"
#include "DialogObjectID.h"
#include "CheckCallCounter.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UCheckCallCounter : public UDaiCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDialogObjectID _Key;
    
    UPROPERTY(EditAnywhere)
    ENumberCompareOperation _Operation;
    
    UPROPERTY(EditAnywhere)
    int32 _Value;
    
public:
    UCheckCallCounter();

};

