#pragma once
#include "CoreMinimal.h"
#include "DialogMember.h"
#include "DialogMembers.generated.h"

USTRUCT()
struct FDialogMembers {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString _Name;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDialogMember> _Members;
    
    DIALOG_API FDialogMembers();
};

