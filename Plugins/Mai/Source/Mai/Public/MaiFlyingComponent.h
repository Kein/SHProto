#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MaiFlyingComponent.generated.h"

class AMaiCharacter;
class AMaiFlyingGraph;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiFlyingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _FlyingTimer;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool _FlyingLanding;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _WantedSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _GoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _FlyingGoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector _FlyingSubGoalLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<FVector> _FlyingPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    AMaiFlyingGraph* _FlyingGraph;
    
    UPROPERTY(BlueprintReadOnly)
    AMaiCharacter* _Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _StartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _LandingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PathRebuildDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalReachedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubGoalCheckPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Debug;
    
    UMaiFlyingComponent(const FObjectInitializer& ObjectInitializer);

};

