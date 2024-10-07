#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "UE4KeyRichText.h"
#include "KeyRichTexts.generated.h"

UCLASS(BlueprintType)
class UKeyRichTexts : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUE4KeyRichText> Keys;
    
public:
    UKeyRichTexts();

    UFUNCTION(BlueprintPure)
    static FText GetKeyDisplayRichText(const FKey& Key);
    
};

