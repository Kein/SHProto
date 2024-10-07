#pragma once
#include "CoreMinimal.h"
#include "DialogConnection.h"
#include "DialogConnectionGroup.generated.h"

USTRUCT()
struct FDialogConnectionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FDialogConnection> _Connections;
    
    DIALOG_API FDialogConnectionGroup();
};

