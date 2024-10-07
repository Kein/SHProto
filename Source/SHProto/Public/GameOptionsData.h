#pragma once
#include "CoreMinimal.h"
#include "EGameOptions.h"
#include "GameOptionValueData.h"
#include "GameOptionsData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGameOptionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EGameOptions Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText DisplayName;
    
    UPROPERTY(VisibleAnywhere)
    FText Description;
    
    UPROPERTY(VisibleAnywhere)
    FText InactiveDescription;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameOptionValueData> Values;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> RemapValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    SHPROTO_API FGameOptionsData();
};

