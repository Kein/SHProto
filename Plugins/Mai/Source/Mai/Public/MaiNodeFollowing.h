#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "MaiNodeFollowing.generated.h"

class AMaiCharacter;
class UCurveFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNodeFollowing : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _StartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _LandingDistance;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool _MoveLanding;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _MoveTimer;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _WantedSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _GoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _MoveGoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _MoveSubGoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<FVector> _MovePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* _SpeedCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    AMaiCharacter* _Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PathRebuildDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalReachedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalCheckPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    bool _UseCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Debug;
    
    UMaiNodeFollowing(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool PreparePathTo(const FVector& goalLocation);
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(const FVector& goalLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsGoalReached(const FVector& goalLocation) const;
    
};

