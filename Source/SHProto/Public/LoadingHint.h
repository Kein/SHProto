#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "LoadingHint.generated.h"

USTRUCT(BlueprintType)
struct FLoadingHint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    TArray<FUE4InputHandle> Actions;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AllowedSavePoints;
    
    SHPROTO_API FLoadingHint();
};

