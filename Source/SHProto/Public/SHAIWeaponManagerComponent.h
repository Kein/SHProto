#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHAIWeaponManagerComponent.generated.h"

class AActor;
class ASHAIWeapon;
class USHAIWeaponManagerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAIWeaponManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHAIWeaponManagerEventWithWeaponContext, USHAIWeaponManagerComponent*, Component, ASHAIWeapon*, WeaponContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHAIWeaponManagerEvent, USHAIWeaponManagerComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAutoSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHAIWeapon> WeaponClassToSpawn;
    
    UPROPERTY(BlueprintAssignable)
    FSHAIWeaponManagerEventWithWeaponContext OnWeaponSpawned;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASHAIWeapon* SpawnedWeapon;
    
public:
    USHAIWeaponManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessSpawnerAfterSpawn(AActor* Actor);
    
};

