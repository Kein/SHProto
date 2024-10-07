#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "ESHAnimEndType.h"
#include "SHMakeNoiseConfig.h"
#include "SHFakeDoor.generated.h"

class ASHFakeDoor;
class UAnimMontage;
class UBoxComponent;
class UObject;
class UPlaneSideDetectionComponent;
class UPrimitiveComponent;
class USHAkFakeDoorComponent;
class USHCharacterPlayCombatComponent;
class USHFakeDoorAnimationsSetData;
class USHGameplayMapObjectComponent;

UCLASS()
class SHPROTO_API ASHFakeDoor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHFakeDoorEventBP, ASHFakeDoor*, FakeDoorPtr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHFakeDoorEvent, ASHFakeDoor*, FakeDoorPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* PlaneSideDetector;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* FakeHitDetector;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkFakeDoorComponent* SHAkFakeDoorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapObjectComponent* GameplayMapObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMakeNoiseConfig NoiseConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHFakeDoorAnimationsSetData* AnimationsSetData;
    
    UPROPERTY(BlueprintAssignable)
    FSHFakeDoorEventBP OnAutoLockedDoorCheckAnimPlayed;
    
public:
    ASHFakeDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const UObject* Enabler, bool InEnabled);
    
protected:
    UFUNCTION()
    void ProcessFakeHitDetectorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnAutoLockedDoorCheckAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void HandleReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp);
    
};

