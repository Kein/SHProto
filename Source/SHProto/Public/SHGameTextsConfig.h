#pragma once
#include "CoreMinimal.h"
#include "GameTextData.h"
#include "GameTextsConfig.h"
#include "EInteractionIconSize.h"
#include "SHGameTextsConfig.generated.h"

UCLASS()
class USHGameTextsConfig : public UGameTextsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameTextData TranscriptionTextData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameTextData TutorialsTextData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EInteractionIconSize, float> InteractionIconScaleMultiplier;
    
    USHGameTextsConfig();

};

