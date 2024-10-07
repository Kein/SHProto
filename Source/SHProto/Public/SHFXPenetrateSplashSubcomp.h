#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHFXSubcomponent.h"
#include "SHFXPenetrateSplashSubcomp.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
class USHFXPenetrateSplashSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHFXPenetrateSplashSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXPenetrateSplashSubcompSettings* Settings;
    
public:
    USHFXPenetrateSplashSubcomp();

protected:
    UFUNCTION()
    void ProcessOwnerDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
};

