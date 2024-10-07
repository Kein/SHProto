#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MandarinIKSettings.generated.h"

USTRUCT(BlueprintType)
struct FMandarinIKSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName LeftHandName;
    
    UPROPERTY(EditDefaultsOnly)
    float LerpSpeed_IK;
    
    UPROPERTY(EditDefaultsOnly)
    float LerpSpeed_Handlock;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DefaultOffset;
    
    SHPROTO_API FMandarinIKSettings();
};

