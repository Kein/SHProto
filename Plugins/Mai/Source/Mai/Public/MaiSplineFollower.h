#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SplineMoveFinishedDelegate.h"
#include "MaiSplineFollower.generated.h"

class AMaiActionPoint;
class AMaiCharacter;
class AMaiSplineActor;
class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiSplineFollower : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AMaiSplineActor* _Spline;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float _SplineDist;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float _SplineSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    AMaiCharacter* _Character;
    
    UPROPERTY(BlueprintAssignable)
    FSplineMoveFinished _OnMoveFinished;
    
    UMaiSplineFollower(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSplineMove();
    
    UFUNCTION(BlueprintCallable)
    static AMaiSplineActor* spawnSplineToAP(APawn* Pawn, AMaiActionPoint* Point);
    
    UFUNCTION(BlueprintCallable)
    void SetSpline(AMaiSplineActor* Spline);
    
    UFUNCTION(BlueprintCallable)
    void RequestSplineMove(AMaiSplineActor* Spline);
    
    UFUNCTION(BlueprintCallable)
    void MoveOnSpline(float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
};

