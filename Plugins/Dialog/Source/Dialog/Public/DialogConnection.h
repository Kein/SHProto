#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "DialogConnection.generated.h"

USTRUCT()
struct FDialogConnection {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 _PinIndex;
    
    UPROPERTY(VisibleAnywhere)
    FString _Outcome;
    
    UPROPERTY(VisibleAnywhere)
    FString _Label;
    
    UPROPERTY(VisibleAnywhere)
    FString _Condition;
    
    UPROPERTY(VisibleAnywhere)
    FDialogObjectID _Target;
    
    DIALOG_API FDialogConnection();
};

