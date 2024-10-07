#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHTranscriptData.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHTranscriptData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Transcript;
    
    USHTranscriptData();

};

