#pragma once
#include "CoreMinimal.h"
#include "FootIKNames.generated.h"

USTRUCT(BlueprintType)
struct FFootIKNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneIKName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneFootName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> ChildrenBonesNames;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName FootLockCurveName;
    
    SHPROTO_API FFootIKNames();
};

