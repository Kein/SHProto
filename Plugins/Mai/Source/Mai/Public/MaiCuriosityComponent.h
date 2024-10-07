#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EMaiSelectionMethod.h"
#include "PerceivePointDelegate.h"
#include "SelectPointDelegate.h"
#include "Templates/SubclassOf.h"
#include "MaiCuriosityComponent.generated.h"

class AActor;
class AMaiActionPoint;
class AMaiPointOfInterest;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiCuriosityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<AMaiActionPoint*> _DetectedPoints;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<AMaiActionPoint*> _PointsInPerception;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Transient, VisibleAnywhere)
    AMaiPointOfInterest* _PointOfInterest;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    TMap<FGuid, float> _PointCooldowns;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    TSet<FGuid> _PointsToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _UseDetection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _UseSenses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _AutoSelect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMaiSelectionMethod _SelectionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SearchCooldown;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    int32 _LastChance;
    
    UPROPERTY(EditAnywhere)
    FLinearColor _InvalidColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor _ValidColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor _SelectedColor;
    
    UPROPERTY(BlueprintAssignable)
    FPerceivePoint PerceivePoint;
    
    UPROPERTY(BlueprintAssignable)
    FSelectPoint SelectPoint;
    
    UMaiCuriosityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePointsInPerception(TSubclassOf<AMaiPointOfInterest> pointClass, float areaExtent);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetectedPoints(float areaExtent);
    
    UFUNCTION(BlueprintPure)
    bool ShouldIgnorePoint(AMaiPointOfInterest* Point) const;
    
    UFUNCTION(BlueprintCallable)
    AMaiPointOfInterest* SelectPointOfInterest(EMaiSelectionMethod selection, TSubclassOf<AMaiPointOfInterest> pointClass);
    
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void IgnorePoint(AMaiPointOfInterest* Point);
    
    UFUNCTION(BlueprintCallable)
    void DebugCuriosity();
    
};

