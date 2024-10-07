#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/StaticMeshComponent.h"
#include "SHBreakableMeshBreakStepData.h"
#include "Templates/SubclassOf.h"
#include "SHBreakableMeshComponent.generated.h"

class UDamageType;
class UObject;
class USHBreakableMeshComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHBreakableMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHBreakableMeshWithHitContextEvent, USHBreakableMeshComponent*, Component, TSubclassOf<UDamageType>, DamageTypeClass, FHitResult, HitResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHBreakableMeshEvent, USHBreakableMeshComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StartFromIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHBreakableMeshBreakStepData> BreakSteps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideAfterLastBreakStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPenetrable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBreakByDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseDamageTypesWhitelist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UDamageType>> DamageTypesWhitelist;
    
    UPROPERTY(BlueprintAssignable)
    FSHBreakableMeshWithHitContextEvent OnReceivedDamageEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHBreakableMeshEvent OnBreakEvent;
    
public:
    USHBreakableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ManualBreakRequest(const UObject* Requester);
    
    UFUNCTION(BlueprintPure)
    bool IsLastBrokenStep(int32 CheckedIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAfterLastBrokenStep(int32 CheckedIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentBrokenIndex() const;
    
};

