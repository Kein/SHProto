#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameTextData.h"
#include "GameTextsConfig.generated.h"

UCLASS(BlueprintType)
class UCSW_API UGameTextsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameTextData DialogsTextData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameTextData ControlTipsTextData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameTextData ControlTipsKeyTextData;
    
    UGameTextsConfig();

};

