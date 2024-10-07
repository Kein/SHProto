#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ChangedSurfaceDelegate.h"
#include "EMaiOnMeshState.h"
#include "MaiWallPathPoint.h"
#include "OnPathRebuildDelegate.h"
#include "SqueezeBelowDelegate.h"
#include "MaiWallFollowing.generated.h"

class AActor;
class AMaiCharacter;
class UCurveFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiWallFollowing : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _MoveTimer;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _WantedSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _GoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _GoalUp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    AActor* _GoalActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _MoveGoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _MoveSubGoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 _SubGoalIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<FMaiWallPathPoint> _MovePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* _SpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FloorCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _WallCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _CeilCost;
    
    UPROPERTY(BlueprintReadOnly)
    EMaiOnMeshState _OnMeshState;
    
    UPROPERTY(VisibleInstanceOnly)
    AActor* _AvoidActor;
    
    UPROPERTY(EditAnywhere)
    float _AvoidRadius;
    
    UPROPERTY(EditAnywhere)
    float _AvoidOffset;
    
    UPROPERTY(EditAnywhere)
    float _AvoidCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _AvoidCountLimit;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    bool _IsUsingLink;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    AMaiCharacter* _Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PathRebuildDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalReachedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalCheckPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _ChangeSurfaceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    bool _UseCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _UseAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _AllowUpdateUpVector;
    
    UPROPERTY(BlueprintAssignable)
    FChangedSurface SurfaceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSqueezeBelow StartedSqueezeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSqueezeBelow FinishedSqueezeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPathRebuild OnPathRebuild;
    
    UMaiWallFollowing(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SnapToFloorMesh(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RebuildPath();
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(const FVector& goalLocation);
    
    UFUNCTION(BlueprintCallable)
    void FinishUsingSurfaceLink();
    
};

