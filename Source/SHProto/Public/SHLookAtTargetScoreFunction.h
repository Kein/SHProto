#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SHLookAtTarget.h"
#include "SHLookAtTargetScoreFunction.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable, EditInlineNew)
class SHPROTO_API USHLookAtTargetScoreFunction : public UObject {
    GENERATED_BODY()
public:
    USHLookAtTargetScoreFunction();

protected:
    UFUNCTION(BlueprintPure)
    bool IsLookAtTargetValid(const FSHLookAtTarget& LookAtTarget) const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetComponentDistance(const FSHLookAtTarget& LookAtTarget) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetTargetComponentAngleDeltas(const FSHLookAtTarget& LookAtTarget) const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetActortDistance(const FSHLookAtTarget& LookAtTarget) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetTargetActorAngleDeltas(const FSHLookAtTarget& LookAtTarget) const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetLookAtTargetScore(const FSHLookAtTarget& LookAtTarget) const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetDefaultLookAtTargetScore(const FSHLookAtTarget& LookAtTarget) const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActorFromTarget(const FSHLookAtTarget& LookAtTarget) const;
    
};

