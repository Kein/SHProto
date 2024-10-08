#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiNoteAftertouch.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiNoteAftertouch : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Note;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Value;
    
    AKAUDIO_API FAkMidiNoteAftertouch();
};

