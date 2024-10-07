#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "SHItemInvestigationTranscriptContext.generated.h"

class USHTranscriptData;

USTRUCT(BlueprintType)
struct FSHItemInvestigationTranscriptContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMinMaxVector2D AnimationTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USHTranscriptData> TranscriptData;
    
    SHPROTO_API FSHItemInvestigationTranscriptContext();
};

