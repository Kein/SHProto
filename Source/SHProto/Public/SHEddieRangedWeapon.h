#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SHAIRangedWeapon.h"
#include "SHEddieRangedWeapon.generated.h"

class AActor;

UCLASS()
class SHPROTO_API ASHEddieRangedWeapon : public ASHAIRangedWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAmmoClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReloadAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FireSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MuzzleSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseCharacterMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BBAmmoKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DebugTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InfiniteAmmo;
    
public:
    ASHEddieRangedWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reload();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFire();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Fire(FHitResult& FoundHit, AActor* Parent);
    
};

