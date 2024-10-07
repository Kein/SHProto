#pragma once
#include "CoreMinimal.h"
#include "ESHDetectionSide.h"
#include "SHTraversalBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "SHTraversalClimbComponent.generated.h"

class USHTraversalClimbAnimInstance;
class USHTraversalClimbComponent;
class USphereComponent;
class USplineComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHTraversalClimbComponent : public USHTraversalBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHClimbWithSideEvent, USHTraversalClimbComponent*, ComponentPtr, ESHDetectionSide, DetectionSide);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHClimbEvent, USHTraversalClimbComponent*, ComponentPtr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHClimbComponentEvent, ESHDetectionSide, DetectionSide);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistanceToEdge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngleToEdge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHTraversalClimbAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistanceScoreMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ViewScoreMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StandingOnSplineScoreMuliplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float EdgeHeightCheckOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxDirectionDistOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TraversalDirectionRadiusCheck;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float HorizontalHeightCheckOffset;
    
    UPROPERTY(BlueprintAssignable)
    FSHClimbComponentEvent OnTraversalStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHClimbComponentEvent OnTraversalFinished;
    
    UPROPERTY(BlueprintAssignable)
    FSHClimbComponentEvent OnTraversalAborted;
    
    UPROPERTY(Transient)
    USHTraversalClimbAnimInstance* LinkedTraversalAnimGraphInstance;
    
    UPROPERTY(Instanced, Transient)
    TArray<USplineComponent*> EdgeSplines;
    
public:
    USHTraversalClimbComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSplines(const TArray<USplineComponent*>& InEdgeSplines);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSplines(const TArray<USplineComponent*>& InEdgeSplines);
    
protected:
    UFUNCTION()
    void ProcessSlideSnapEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessMovementSnapEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessEndTraversal();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(USphereComponent* InProximitySphere, const TArray<USplineComponent*>& InEdgeSplines);
    
};

