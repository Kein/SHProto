#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogGlobals.h"
#include "DialogObjectID.h"
#include "FlowDebugger.generated.h"

class UDialogData;
class UFlowTask;

UCLASS()
class DIALOG_API UFlowDebugger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UDialogData* _DialogData;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    TArray<UFlowTask*> _Runtime;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FDialogObjectID, bool> _Breakpoints;
    
    UPROPERTY(EditAnywhere, Transient)
    FDialogGlobals _DialogGlobals;
    
    UFlowDebugger();

};

