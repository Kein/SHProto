#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtmosphereDOFFactor.generated.h"

USTRUCT(BlueprintType)
struct FAtmosphereDOFFactor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInt32Point Resolution;
    
    UPROPERTY(EditAnywhere)
    float Factor;
    
    POSTPROCESSVOLUMEEX_API FAtmosphereDOFFactor();
};

