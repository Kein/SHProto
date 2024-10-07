#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SHAIWeapon.h"
#include "Templates/SubclassOf.h"
#include "SHAIMeleeWeapon.generated.h"

class AActor;
class UDamageType;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Abstract)
class SHPROTO_API ASHAIMeleeWeapon : public ASHAIWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EnvDamageValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UDamageType> EnvDamageTypeClass;
    
    UPROPERTY(Instanced, Transient)
    TArray<UShapeComponent*> EnvCollisionShapes;
    
public:
    ASHAIMeleeWeapon(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void HandleMeshComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UShapeComponent*> BlueprintGetEnvCollisionShapes() const;
    
};

