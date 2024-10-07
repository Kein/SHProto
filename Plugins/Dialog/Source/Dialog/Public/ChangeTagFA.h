#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "ETagOperation2.h"
#include "FlowAction.h"
#include "ChangeTagFA.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UChangeTagFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Performer;
    
    UPROPERTY(EditAnywhere)
    ETagOperation2 _Operation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Tag;
    
    UChangeTagFA();

};

