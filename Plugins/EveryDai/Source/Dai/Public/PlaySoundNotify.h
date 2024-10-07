#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DaiContext.h"
#include "DaiNotify.h"
#include "PlaySoundNotify.generated.h"

class USoundCue;

UCLASS(EditInlineNew)
class DAI_API UPlaySoundNotify : public UDaiNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool _Fixed;
    
    UPROPERTY()
    FGameplayTag _ActorTag;
    
    UPROPERTY(EditAnywhere)
    FDaiContext _Notified;
    
    UPROPERTY(EditAnywhere)
    USoundCue* _SoundToPlay;
    
    UPROPERTY(EditAnywhere)
    bool _Attached;
    
public:
    UPlaySoundNotify();

};

