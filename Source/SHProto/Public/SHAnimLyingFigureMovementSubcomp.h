#pragma once
#include "CoreMinimal.h"
#include "SHAnimNPCMovementSubcomp.h"
#include "SHAnimLyingFigureMovementSubcomp.generated.h"

class USHEnemyLyingComponent;
class USceneComponent;

UCLASS(EditInlineNew)
class SHPROTO_API USHAnimLyingFigureMovementSubcomp : public USHAnimNPCMovementSubcomp {
    GENERATED_BODY()
public:
    USHAnimLyingFigureMovementSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetRequiredLocomotionDistanceAccuracy(float InDistanceAccuracy);
    
    UFUNCTION(BlueprintCallable)
    void SetCrawlBendAngles(float InYawAngle, float InPitchAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowInaccurateLocomotionAnimations(bool InAllow);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPrerequisites(USHEnemyLyingComponent* InLyingComponent, USceneComponent* InCrawlRearComponent, USceneComponent* InCrawlFrontComponent);
    
};

