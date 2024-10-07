#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "SHKeyAttachmentDataStruct.h"
#include "SHBaseDoorAttachment.generated.h"

class ASHCharacterPlay;
class UPrimitiveComponent;
class USHDoorLockBaseComponent;
class USphereComponent;

UCLASS(Abstract)
class ASHBaseDoorAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* ProximitySphere;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShouldManageDoorDetectable;
    
    UPROPERTY(Transient)
    AActor* DoorActor;
    
public:
    ASHBaseDoorAttachment(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetDoorActorFrozen(bool Inset);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterDoorActor(AActor* InActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshVisuals();
    
    UFUNCTION()
    void ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessOnDoorLockStateChanged(USHDoorLockBaseComponent* DoorLockComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnParentModified();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnParentInteracted();
    
    UFUNCTION(BlueprintPure)
    ASHCharacterPlay* GetProximityCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FSHKeyAttachmentDataStruct GetKeyAttachmentData(FName KeyAttachmentName) const;
    
    UFUNCTION(BlueprintCallable)
    void EnsureDoorActorClosed();
    
};

