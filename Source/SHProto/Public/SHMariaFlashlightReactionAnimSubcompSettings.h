#pragma once
#include "CoreMinimal.h"
#include "DialogDialog.h"
#include "DialogInfo.h"
#include "SHAnimSubcompSettings.h"
#include "SHMariaFlashlightReactionAnimSubcompSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHMariaFlashlightReactionAnimSubcompSettings : public FSHAnimSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float BlendIn_InterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float BlendOut_InterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float BlendOutReactionDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FName BlackboardKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    float DialogTalkRequiredShineTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DialogTalkInterval;
    
    UPROPERTY(EditDefaultsOnly)
    FDialogDialog DialogID;
    
    UPROPERTY(EditDefaultsOnly)
    FDialogInfo DialogInfo;
    
    FSHMariaFlashlightReactionAnimSubcompSettings();
};

