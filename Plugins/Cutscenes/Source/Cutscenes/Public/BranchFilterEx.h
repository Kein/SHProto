#pragma once
#include "CoreMinimal.h"
#include "BranchFilterEx.generated.h"

USTRUCT(BlueprintType)
struct CUTSCENES_API FBranchFilterEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BlendDepth;
    
    FBranchFilterEx();
};

