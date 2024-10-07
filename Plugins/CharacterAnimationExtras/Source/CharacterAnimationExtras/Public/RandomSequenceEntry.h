#pragma once
#include "CoreMinimal.h"
#include "RandomSequenceEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRandomSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChanceToPlay;
    
    CHARACTERANIMATIONEXTRAS_API FRandomSequenceEntry();
};

