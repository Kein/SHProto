#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Templates/SubclassOf.h"
#include "SHInvestigatedItemAnimInstance.generated.h"

class USHItemInvestigationMainLoopAnimInstance;

UCLASS(NonTransient)
class USHInvestigatedItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHItemInvestigationMainLoopAnimInstance> MainLoopState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MainLoopStateTag;
    
    USHInvestigatedItemAnimInstance();

};

