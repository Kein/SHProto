#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlowAction.h"
#include "PlaySoundFA.generated.h"

UCLASS(EditInlineNew)
class UPlaySoundFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath _SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _ComponentTag;
    
    UPlaySoundFA();

};

