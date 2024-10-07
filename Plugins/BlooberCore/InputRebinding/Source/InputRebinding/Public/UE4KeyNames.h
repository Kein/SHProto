#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UE4KeyTexts.h"
#include "UE4KeyNames.generated.h"

UCLASS()
class INPUTREBINDING_API UUE4KeyNames : public UUE4KeyTexts {
    GENERATED_BODY()
public:
    UUE4KeyNames();

    UFUNCTION(BlueprintPure)
    static FText GetKeyTranslatedText(const FKey& Key, bool UseKeyTag, bool UseTags);
    
    UFUNCTION(BlueprintPure)
    static FText GetKeyTranslatedDisplayName(const FKey& Key);
    
};

