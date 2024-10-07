#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/LineBatchComponent.h"
#include "MaiActionSequenceComponent.generated.h"

class AMaiActionPoint;
class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiActionSequenceComponent : public ULineBatchComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<AMaiActionPoint*> _SequencePoints;
    
    UPROPERTY(EditAnywhere)
    FColor _SequenceColor;
    
    UPROPERTY(EditAnywhere)
    float _AutoAddRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Looped;
    
protected:
    UPROPERTY(Transient)
    int32 _PreviewIndex;
    
    UPROPERTY(Transient)
    AMaiActionPoint* _MovingPoint;
    
public:
    UMaiActionSequenceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AMaiActionPoint* GetTargetActionPoint() const;
    
    UFUNCTION(BlueprintPure)
    void GetSequenceActionPoints(TArray<AMaiActionPoint*>& Points) const;
    
    UFUNCTION(BlueprintPure)
    AMaiActionPoint* GetNextActionPoint(AMaiActionPoint* Point, APawn* conditionCaller) const;
    
};

