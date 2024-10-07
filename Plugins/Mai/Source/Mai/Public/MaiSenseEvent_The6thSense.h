#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "MaiThe6thSenseEvent.h"
#include "MaiSenseEvent_The6thSense.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class MAI_API UMaiSenseEvent_The6thSense : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaiThe6thSenseEvent Event;
    
public:
    UMaiSenseEvent_The6thSense();

};

