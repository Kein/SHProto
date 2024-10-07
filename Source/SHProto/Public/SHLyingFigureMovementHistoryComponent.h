#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SHLyingFigureMovementHistoryComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHLyingFigureMovementHistoryComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float MinimumDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumDirectionAnglePerDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumRotationAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumScaleDelta;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumHistoryDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float TeleportDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDrawMovementPath;
    
public:
    USHLyingFigureMovementHistoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetMovementHistory();
    
    UFUNCTION(BlueprintPure)
    bool FindWaypointAtTime(FTransform& OutTransform, float& OutDistance, float& OutTimeBehind, float InDeltaTimeBehind, float InMinimumDistanceFromCurrentPosition) const;
    
    UFUNCTION(BlueprintPure)
    bool FindWaypointAtDistance(FTransform& OutTransform, float& OutDistance, float& OutTimeBehind, float InDistanceBehind, float InMinimumDistanceFromCurrentPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugDrawMovementPath(float InDuration) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddMovementWaypoint(const FTransform& InWorldTransform);
    
};

