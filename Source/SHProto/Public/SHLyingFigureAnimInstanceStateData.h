#pragma once
#include "CoreMinimal.h"
#include "SHMonsterAnimInstanceStateData.h"
#include "SHLyingFigureAnimInstanceStateData.generated.h"

UCLASS()
class SHPROTO_API USHLyingFigureAnimInstanceStateData : public USHMonsterAnimInstanceStateData {
    GENERATED_BODY()
public:
    USHLyingFigureAnimInstanceStateData();

    UFUNCTION(BlueprintPure)
    float GetInaccurateLocomotionAnimationsDistanceAccuracy() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrawlBendYawAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrawlBendPitchAngle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAreInaccurateLocomotionAnimationsAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAreAllowedInaccurateLocomotionAnimationsOfDistance(float InAnimationDistance) const;
    
};

