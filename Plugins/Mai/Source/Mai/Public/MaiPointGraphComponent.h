#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "MaiActionPointQuery.h"
#include "MaiPointGraphComponent.generated.h"

class AMaiActionPoint;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiPointGraphComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<AMaiActionPoint*> _ActionPoints;
    
    UPROPERTY()
    bool _SequenceConverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Indoor;
    
    UMaiPointGraphComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AMaiActionPoint* GetRandomActionPoint() const;
    
    UFUNCTION(BlueprintPure)
    void GetActionPointsWithQuery(TArray<AMaiActionPoint*>& actionPoints, const FMaiActionPointQuery& query) const;
    
    UFUNCTION(BlueprintPure)
    void GetActionPoints(TArray<AMaiActionPoint*>& actionPoints, FName withTag) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActionPointCount() const;
    
    UFUNCTION(BlueprintPure)
    AMaiActionPoint* FindNearestPoint(const FVector& Location) const;
    
};

