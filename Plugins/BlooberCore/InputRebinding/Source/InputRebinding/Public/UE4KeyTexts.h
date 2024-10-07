#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UE4KeyName.h"
#include "UE4KeyTexts.generated.h"

UCLASS(BlueprintType)
class INPUTREBINDING_API UUE4KeyTexts : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUE4KeyName> Keys;
    
public:
    UUE4KeyTexts();

};

