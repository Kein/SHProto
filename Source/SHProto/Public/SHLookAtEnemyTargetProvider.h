#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTargetProvider.h"
#include "Templates/SubclassOf.h"
#include "SHLookAtEnemyTargetProvider.generated.h"

class ACharacter;
class UCurveFloat;

UCLASS(Abstract, EditInlineNew)
class SHPROTO_API USHLookAtEnemyTargetProvider : public USHLookAtTargetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* AngleScoreCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ACharacter> EnemyClass;
    
private:
    UPROPERTY(Transient)
    ACharacter* LastSelectedEnemy;
    
public:
    USHLookAtEnemyTargetProvider();

};

