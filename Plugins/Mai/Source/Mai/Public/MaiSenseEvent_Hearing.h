#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "MaiNoiseEvent.h"
#include "MaiSenseEvent_Hearing.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class MAI_API UMaiSenseEvent_Hearing : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaiNoiseEvent Event;
    
public:
    UMaiSenseEvent_Hearing();

};

