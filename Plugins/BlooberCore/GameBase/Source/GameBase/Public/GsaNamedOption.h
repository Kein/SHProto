#pragma once
#include "CoreMinimal.h"
#include "GsaOptionCondition.h"
#include "GsaNamedOption.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASE_API FGsaNamedOption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    int32 Default;
    
    UPROPERTY(EditAnywhere)
    int32 ValueMin;
    
    UPROPERTY(EditAnywhere)
    int32 ValueMax;
    
    UPROPERTY(EditAnywhere)
    int32 NumSteps;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Values;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<int32> QualityValues;
    
    UPROPERTY(EditAnywhere)
    FGsaOptionCondition Condition;
    
    UPROPERTY(EditAnywhere)
    int32 Flags;
    
    FGsaNamedOption();
};

