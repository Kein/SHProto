#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "MenuTutorial.generated.h"

USTRUCT(BlueprintType)
struct FMenuTutorial {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    TArray<FUE4InputHandle> Actions;
    
    SHPROTO_API FMenuTutorial();
};

