#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtmosphereDOFFactor.h"
#include "AtmosphereDOFFactorDA.generated.h"

UCLASS()
class UAtmosphereDOFFactorDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAtmosphereDOFFactor> Factors;
    
    UAtmosphereDOFFactorDA();

};

