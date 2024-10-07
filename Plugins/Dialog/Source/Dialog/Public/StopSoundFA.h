#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlowAction.h"
#include "StopSoundFA.generated.h"

UCLASS(EditInlineNew)
class UStopSoundFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath _SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _ComponentTag;
    
    UStopSoundFA();

};

