#pragma once
#include "CoreMinimal.h"
#include "DaiEnum.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct FDaiEnum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnum* _Enum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _Value;
    
    UPROPERTY(EditAnywhere)
    bool _Enabled;
    
    DAI_API FDaiEnum();
};

