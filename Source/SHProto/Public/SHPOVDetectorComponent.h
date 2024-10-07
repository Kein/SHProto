#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHPOVDetectorProximityPoints.h"
#include "SHPOVDetectorComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHPOVDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPointsAligned, bool, Aligned);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FPointsAligned OnPointsAlignedBP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DrawLineDebug;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DrawProximityDebug;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor AlignColorBad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor AlignColorGood;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngleThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProximityThreshold;
    
    UPROPERTY(Instanced, Transient)
    TArray<USceneComponent*> LinePoints;
    
    UPROPERTY(Transient)
    TArray<FSHPOVDetectorProximityPoints> ProximityPoints;
    
public:
    USHPOVDetectorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetProximityPoints(const USceneComponent* Point0, const USceneComponent* Point1);
    
    UFUNCTION(BlueprintCallable)
    void SetManyProximityPoints(const TArray<USceneComponent*>& NewPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetLinePoints(const USceneComponent* Point0, const USceneComponent* Point1, const USceneComponent* Point2);
    
    UFUNCTION(BlueprintPure)
    bool ArePointsAligned() const;
    
};

