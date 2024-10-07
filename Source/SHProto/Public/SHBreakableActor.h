#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "ESHSecondaryTargetType.h"
#include "SHMeleeAttackSecondaryTargetInterface.h"
#include "SHBreakableActor.generated.h"

class ASHBreakableActor;

UCLASS()
class SHPROTO_API ASHBreakableActor : public AActor, public ISHMeleeAttackSecondaryTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHBreakableActorEvent, ASHBreakableActor*, Actor);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bManualDamageTaking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BreakablePlaneLocalDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BreakablePlaneOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BreakableBoundsExtend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BreakableBoundsSafePadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedDistanceToHitPoint2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRequiredDirectionsDotProduct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SecondaryAttackDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHSecondaryTargetType SecondaryTargetType;
    
    UPROPERTY(BlueprintAssignable)
    FSHBreakableActorEvent DamageTakenEvent;
    
    UPROPERTY(SaveGame)
    bool bIsBroken;
    
public:
    ASHBreakableActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessDamageTaken();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessApplyState();
    
public:
    UFUNCTION(BlueprintCallable)
    void ManualDamageTaken();
    
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignRuntimeSecondaryAttackRowName(const FName& InRowName);
    

    // Fix for true pure virtual functions not being implemented
};

