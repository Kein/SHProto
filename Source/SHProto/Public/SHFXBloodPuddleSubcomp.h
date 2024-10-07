#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHFXSubcomponent.h"
#include "SHFXBloodPuddleSubcomp.generated.h"

class AActor;
class AController;
class ASHBloodPuddle;
class UDamageType;
class UObject;
class UPrimitiveComponent;
class USHFXBloodPuddleSubcompSettings;

UCLASS(Blueprintable, EditInlineNew)
class SHPROTO_API USHFXBloodPuddleSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXBloodPuddleSubcompSettings* Settings;
    
    UPROPERTY(Transient)
    ASHBloodPuddle* CurrentBloodPuddle;
    
public:
    USHFXBloodPuddleSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetBloodPuddleBlocked(const bool IsBlock, const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessOwnerRevive();
    
    UFUNCTION()
    void ProcessOwnerDead();
    
    UFUNCTION()
    void ProcessOwnerDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBloodPuddleBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBloodPuddleBlocked() const;
    
    UFUNCTION(BlueprintPure)
    ASHBloodPuddle* GetCurrentBloodPuddle() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BloodPuddleSpawned();
    
};

