#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "RandomSequenceEntry.h"
#include "AnimNode_RandomSingleSequencePlayer.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct CHARACTERANIMATIONEXTRAS_API FAnimNode_RandomSingleSequencePlayer : public FAnimNode_SequencePlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRandomSequenceEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShuffleMode;
    
protected:
    UPROPERTY()
    UAnimSequenceBase* Sequence;
    
public:
    FAnimNode_RandomSingleSequencePlayer();
};

