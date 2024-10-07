#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MaiActionPointQuery.h"
#include "MaiEditorSelectableInterface.h"
#include "MaiActionGraph.generated.h"

class AMaiActionPoint;
class APawn;
class UMaiPointGraphComponent;

UCLASS()
class MAI_API AMaiActionGraph : public AActor, public IMaiEditorSelectableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMaiPointGraphComponent* _PointGraph;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<APawn*> _GraphWalkers;
    
    AMaiActionGraph(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    void GetSequenceActionPoints(TArray<AMaiActionPoint*>& actionPoints, FName sequenceTag) const;
    
    UFUNCTION(BlueprintPure)
    AMaiActionPoint* GetNextActionPoint(AMaiActionPoint* ap, FName sequenceTag) const;
    
    UFUNCTION(BlueprintPure)
    void GetActionPointsWithQuery(TArray<AMaiActionPoint*>& actionPoints, const FMaiActionPointQuery& query) const;
    
    UFUNCTION(BlueprintPure)
    void GetActionPoints(TArray<AMaiActionPoint*>& actionPoints) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActionPointCount() const;
    
    UFUNCTION(BlueprintPure)
    AMaiActionPoint* FindNearestPoint(const FVector& Location) const;
    

    // Fix for true pure virtual functions not being implemented
};

