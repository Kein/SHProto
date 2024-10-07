#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTargetProvider.h"
#include "SHLookAtInteractionTargetProvider.generated.h"

class UCurveFloat;
class USceneComponent;

UCLASS(Abstract, EditInlineNew)
class SHPROTO_API USHLookAtInteractionTargetProvider : public USHLookAtTargetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* AngleScoreCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InteractionTraceRetries;
    
private:
    UPROPERTY(Instanced, Transient)
    USceneComponent* ActiveInteractionComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* LastSelectedComponent;
    
public:
    USHLookAtInteractionTargetProvider();

};

