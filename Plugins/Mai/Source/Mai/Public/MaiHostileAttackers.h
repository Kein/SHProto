#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DaiBlockade.h"
#include "Components/ActorComponent.h"
#include "EMaiToken.h"
#include "MaiHostileConfig.h"
#include "MaiTokenConfig.h"
#include "MaiTokenCooldown.h"
#include "Templates/SubclassOf.h"
#include "MaiHostileAttackers.generated.h"

class AActor;
class UMaiHostileAttackers;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiHostileAttackers : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    uint8 _MaxActiveAttackers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    TArray<AActor*> _ActiveAttackers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    TArray<AActor*> _PassiveAttackers;
    
    UPROPERTY(EditInstanceOnly)
    FDaiBlockade _LockTokensDistribution;
    
    UPROPERTY(EditInstanceOnly)
    FDaiBlockade _HardLockTokens;
    
    UPROPERTY(EditInstanceOnly)
    TArray<AActor*> _TokenLockOwners;
    
    UPROPERTY(EditAnywhere)
    FMaiHostileConfig _DifficultyConfig[10];
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    int32 _TokenCoinsPaid;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    int32 _Token2Used[32];
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TArray<FMaiTokenCooldown> _Token2Cooldown;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TMap<AActor*, uint8> _Token2Holders;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TMap<AActor*, FVector> _Token2Waiting;
    
    UPROPERTY(EditAnywhere)
    float _Token2StealAngle;
    
    UPROPERTY(EditAnywhere)
    float _Token2StealDist;
    
    UPROPERTY(EditAnywhere)
    int32 _Pool;
    
    UPROPERTY(EditAnywhere)
    FMaiTokenConfig _Token2Config[32];
    
    UPROPERTY(EditAnywhere)
    int32 _Token2Pools[32];
    
    UMaiHostileAttackers(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void UpdateActiveAttackers();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TakeToken(AActor* enemy, EMaiToken Token, const TArray<FName>& ignoreLocks, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void TakeAttackPosition(AActor* enemy, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToken(AActor* enemy, bool addCooldown);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttacker(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAttackers();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAttackPosition(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void OfferSlotToOthers(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void LockTokensDistribution(FName Reason, bool lock);
    
    UFUNCTION(BlueprintCallable)
    void LockTokens(FName Reason, bool lock);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreLockFor(FName Reason, AActor* enemy, bool onlyIfLocked);
    
    UFUNCTION(BlueprintPure)
    bool HasToken(AActor* enemy) const;
    
    UFUNCTION(BlueprintPure)
    bool HasOtherAttacker(AActor* enemy) const;
    
    UFUNCTION(BlueprintPure)
    bool HasHardLock() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyAttacker() const;
    
    UFUNCTION(BlueprintCallable)
    void HardLockTokens(FName Reason, AActor* enemy);
    
    UFUNCTION(BlueprintPure)
    AActor* GetTokenLockOwner() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTokenHolder() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetSlotHoldersCount(TSubclassOf<AActor> klass) const;
    
    UFUNCTION(BlueprintCallable)
    static UMaiHostileAttackers* getHostileAttackers(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    uint8 GetAttackerCount() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool DisallowSlotGive(AActor* enemy) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugAttacker();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaxActiveAttackers(uint8 Count);
    
    UFUNCTION(BlueprintCallable)
    void CaptureTokenLock(AActor* enemy, bool lock);
    
    UFUNCTION(BlueprintPure)
    bool CanHaveSlot(AActor* enemy) const;
    
    UFUNCTION(BlueprintPure)
    bool CanGetSlot(AActor* enemy) const;
    
    UFUNCTION(BlueprintPure)
    bool CanCaptureToken(AActor* enemy) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddAttacker(AActor* enemy);
    
};

