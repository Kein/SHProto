#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTransformationStateVariantSettings.h"
#include "SHEnemyTransformationStateVariant.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyTransformationStateVariant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName VariantName;
    
    UPROPERTY(EditAnywhere)
    FSHEnemyTransformationStateVariantSettings VariantSettings;
    
    SHPROTO_API FSHEnemyTransformationStateVariant();
};

