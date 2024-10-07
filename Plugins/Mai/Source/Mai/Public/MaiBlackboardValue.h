#pragma once
#include "CoreMinimal.h"
#include "DaiEnum.h"
#include "MaiBlackboardValue.generated.h"

class UBlackboardData;
class UObject;

USTRUCT(BlueprintType)
struct MAI_API FMaiBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlackboardData* _Board;
    
    UPROPERTY(EditAnywhere)
    FName _Name;
    
    UPROPERTY(EditAnywhere)
    bool _Bool;
    
    UPROPERTY(EditAnywhere)
    UClass* _Class;
    
    UPROPERTY(EditAnywhere)
    float _Float;
    
    UPROPERTY(EditAnywhere)
    int32 _Int;
    
    UPROPERTY(EditAnywhere)
    FString _String;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> _Object;
    
    UPROPERTY(EditAnywhere)
    FDaiEnum _Enum;
    
    FMaiBlackboardValue();
};

