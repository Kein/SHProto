#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHFXSubcomponent.h"
#include "SHFXSplashPuddleSubcomp.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
class USHFXSplashPuddleSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHFXSplashPuddleSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXSplashPuddleSubcompSettings* Settings;
    
public:
    USHFXSplashPuddleSubcomp();

protected:
    UFUNCTION()
    void ProcessOwnerDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
};

