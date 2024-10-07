#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FootIKData.generated.h"

USTRUCT(BlueprintType)
struct FFootIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float IKAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FootOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator FootRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FootOffsetAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector FootLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator FootLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float FootLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRotator> ChildrenBonesLockRotation;
    
    SHPROTO_API FFootIKData();
};

