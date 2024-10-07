#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LoadingHint.h"
#include "LoadingHints.generated.h"

UCLASS()
class ULoadingHints : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FLoadingHint> Hints;
    
    ULoadingHints();

};

