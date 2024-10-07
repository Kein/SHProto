#pragma once
#include "CoreMinimal.h"
#include "NameSelector.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FNameSelector {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FName> _List;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 _Index;
    
    FNameSelector();
};

