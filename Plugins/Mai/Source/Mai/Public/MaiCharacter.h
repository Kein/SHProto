#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DaiBlockade.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "NinjaCharacter.h"
#include "EMaiDespawnReason.h"
#include "MaiCharacterEventDelegate.h"
#include "MaiDespawnInterface.h"
#include "MaiLevelLocation.h"
#include "MaiLocations.h"
#include "Templates/SubclassOf.h"
#include "MaiCharacter.generated.h"

class AActor;
class AController;
class AMaiController;
class AMaiDebugger;
class AMaiSpawner;
class APawn;
class UBeingStatesComponent;
class UDamageType;
class UMaiCharacterMovementComponent;
class USceneComponent;
class UShapeComponent;

UCLASS()
class MAI_API AMaiCharacter : public ANinjaCharacter, public IGameplayTagAssetInterface, public IMaiDespawnInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* _MeshPivot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBeingStatesComponent* _MyStates;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USceneComponent* _EyesViewPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UShapeComponent*> _AttackColliders;
    
    UPROPERTY(Transient)
    TMap<UShapeComponent*, FMaiLocations> _AttackCollidersDebug;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FGameplayTagContainer _TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _EyesInLookAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _DetectLongFall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _DetectLongFallDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float _DetectLongFallTimer;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FDaiBlockade _DeactivationReasons;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    TArray<FMaiLevelLocation> _LevelPath;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FTransform _SpawnTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult _MoveBlockedBy;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FMaiCharacterEvent OnFullyDisabledValueChanged;
    
public:
    AMaiCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WantDespawn(bool Despawn);
    
    UFUNCTION(BlueprintNativeEvent)
    float TakePointDamage(float Damage, TSubclassOf<UDamageType> damageClass, AController* EventInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGameplayTags(FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer GameplayTags);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveShouldDespawn(EMaiDespawnReason Reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LongFallDetected();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsNotMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetPrevLevelLocation(float minDist) const;
    
public:
    UFUNCTION(BlueprintPure)
    AMaiSpawner* GetMaiSpawner() const;
    
    UFUNCTION(BlueprintPure)
    AMaiController* GetMaiController() const;
    
    UFUNCTION(BlueprintPure)
    UMaiCharacterMovementComponent* GetMaiCharacterMovement() const;
    
    UFUNCTION(BlueprintPure)
    static FVector getFixedGroundLocation(APawn* Pawn, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static FVector getFixedCapsuleLocation(APawn* Pawn, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void EnableAttackColliders(TArray<FName> collidersTags);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void EnableActor();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableAttackColliders(TArray<FName> collidersTags);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void DisableActor();
    
public:
    UFUNCTION(BlueprintCallable)
    void Deactivate(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void ClearGameplayTags();
    
    UFUNCTION(BlueprintCallable)
    void AppendGameplayTags(FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintNativeEvent)
    void AIDebuggerTick(AMaiDebugger* debugger, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Activate(FName Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortAttack(FName attackName);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

