#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "DaiFloatModifier2.h"
#include "MaiFloatAggroModifier.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAI_API UMaiFloatAggroModifier : public UDaiFloatModifier2 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    FAIStimulus _Stimulus;
    
public:
    UMaiFloatAggroModifier();

    UFUNCTION(BlueprintPure)
    FAIStimulus GetStimulus() const;
    
};

