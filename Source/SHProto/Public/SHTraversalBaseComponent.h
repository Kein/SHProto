#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "ESHTraversalType.h"
#include "SHTraversalBaseComponent.generated.h"

class AActor;
class ASHCharacterPlay;
class UObject;
class UPrimitiveComponent;
class USHTraversalBaseComponent;
class USphereComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHTraversalBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHTraversalBaseEvent, USHTraversalBaseComponent*, ComponentPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESHTraversalType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabledBeginPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoInvokeMaxDist2D;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool bManageOwnerTick;
    
    UPROPERTY(BlueprintAssignable)
    FSHTraversalBaseEvent ProximityFoundCharacterPlayBlueprintEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHTraversalBaseEvent ProximityLostCharacterPlayBlueprintEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHTraversalBaseEvent TraversalEnableChangedBlueprintEvent;
    
    UPROPERTY(Instanced, Transient)
    USphereComponent* ProximitySphere;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* InteractingCharacter;
    
public:
    USHTraversalBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUnavailable(bool InUnavailable, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool InEnable, UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUnavailable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

