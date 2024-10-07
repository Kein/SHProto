#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "MaiCharacter.h"
#include "MaiTickLODInterface.h"
#include "SHCombatPlayDeathInterface.h"
#include "Templates/SubclassOf.h"
#include "SHAICharacter.generated.h"

class AActor;
class APawn;
class ASHDeathPlayer;
class UDamageType;
class UDataTable;
class UMaiHealth;
class UMaiReincarnationComponent;
class UObject;
class USHAIWeaponManagerComponent;
class USHAnimComponent;
class USHEnemyCameraOverlapHandleComponent;
class USHFXComponent;
class USceneComponent;
class USkeletalMesh;

UCLASS()
class SHPROTO_API ASHAICharacter : public AMaiCharacter, public ISHCombatPlayDeathInterface, public IMaiTickLODInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHEnemyCameraOverlapHandleComponent* PlayerCameraOverlapHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAIWeaponManagerComponent* AIWeaponManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHFXComponent* FXComponent;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> HardStoredObjects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* _FinishersTable;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHAnimComponent* AnimComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMaiHealth* healthComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMaiReincarnationComponent* ReincarnationComponent;
    
    UPROPERTY(SaveGame)
    TSoftObjectPtr<USkeletalMesh> _SoftCustomMesh;
    
public:
    ASHAICharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabledPushedByPlayer(const bool bInDisable, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMesh(TSoftObjectPtr<USkeletalMesh> customMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioStopWhenDespawned(bool bStopAudioStopWhenDespawned);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Revive();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetPawn();
    
    UFUNCTION(BlueprintCallable)
    bool PlayDeathSequenceRequest(APawn* slayer, TSoftClassPtr<ASHDeathPlayer> deathPlayerSoftClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSnap(float snapDuration, TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintPure)
    bool IsUnderObstacle() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsUnderEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPushedByPlayerDisabledBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPushedByPlayerDisabled() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsPrimaryEnemy() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsLying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsKnockedDown() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetOffsetForEnvironmentTrace() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetFlashlightTarget() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FGameplayTagContainer GetFinisherTags(AActor* victim) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetFinisherParams(AActor* victim, FGameplayTagContainer tagFilters) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<USceneComponent*> GetAutoAimTargets() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<TSoftObjectPtr<UObject>> GetAssetsToHardStore() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetActorLocationAsMeleeTarget() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool EnforceFinisher() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDeathSequenceDebug(float DeltaSeconds, TSoftClassPtr<ASHDeathPlayer> deathPlayerSoftClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Die();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeSteppedOn() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowFinisher() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowDeath() const;
    

    // Fix for true pure virtual functions not being implemented
};

