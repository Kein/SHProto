#pragma once
#include "CoreMinimal.h"
#include "DialogConnectionGroup.h"
#include "DialogObjectID.h"
#include "DialogMember.generated.h"

USTRUCT()
struct FDialogMember {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 _Type;
    
    UPROPERTY(VisibleAnywhere)
    FString _MemberName;
    
    UPROPERTY(VisibleAnywhere)
    FString _StringValue;
    
    UPROPERTY(VisibleAnywhere)
    FDialogObjectID _ObjectValue;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDialogObjectID> _ListValue;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDialogConnectionGroup> _ConnectionList;
    
    DIALOG_API FDialogMember();
};

