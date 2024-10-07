#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Components/SceneComponent.h"
#include "ESHSecondaryTargetType.h"
#include "SHMeleeAttackSecondaryTargetInterface.h"
#include "SHSecondaryTargetComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHSecondaryTargetComponent : public USceneComponent, public ISHMeleeAttackSecondaryTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCompletedOnBegin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D TargetSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedHeightDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedDistanceToHitPoint2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDirectionalOneSideOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRequiredDirectionsDotProduct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SecondaryAttackDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHSecondaryTargetType SecondaryTargetType;
    
public:
    USHSecondaryTargetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool InDisabled, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void MarkAsCompleted();
    
    UFUNCTION(BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignRuntimeSecondaryAttackRowName(const FName& InRowName);
    

    // Fix for true pure virtual functions not being implemented
};

