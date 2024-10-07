#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHNamedMaterialParameter.generated.h"

USTRUCT()
struct FSHNamedMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Valid;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FLinearColor Value;
    
    UPROPERTY()
    FLinearColor LastKnownValue;
    
    UPROPERTY(Transient)
    int32 Index;
    
    SHPROTO_API FSHNamedMaterialParameter();
};

