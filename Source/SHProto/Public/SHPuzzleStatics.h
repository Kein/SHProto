#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHPuzzleStatics.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHPuzzleStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHPuzzleStatics();

private:
    UFUNCTION(BlueprintCallable)
    static void GetLadyJusticePuzzlePossibleVariations(const float StartValue, const TMap<float, FString> SolutionValueToName, const TArray<float> Weights);
    
};

