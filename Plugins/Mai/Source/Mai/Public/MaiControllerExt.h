#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMaiParty.h"
#include "MaiController.h"
#include "MaiEnemyChangeDelegate.h"
#include "MaiControllerExt.generated.h"

class AActor;

UCLASS()
class MAI_API AMaiControllerExt : public AMaiController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    EMaiParty _Party;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    AActor* _ArchEnemy;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    AActor* _ForcedEnemy;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    AActor* _FightingEnemy;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleInstanceOnly)
    bool _ClearChaseWhenPerceived;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, SaveGame)
    bool _IgnoreAll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName _BBArchEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName _BBInstigator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName _BBAlertLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName _BBChaseLocation;
    
public:
    UPROPERTY(BlueprintAssignable)
    FMaiEnemyChange OnArchEnemyChange;
    
    AMaiControllerExt(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateEnemyData();
    
    UFUNCTION(BlueprintCallable)
    void SetParty(EMaiParty party);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreAll();
    
    UFUNCTION(BlueprintCallable)
    void SetForcedEnemy(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void SetFightingEnemy(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void SetChaseLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetArchEnemy(AActor* enemy);
    
    UFUNCTION(BlueprintCallable)
    void SetAlertLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetAlertInstigator(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsFightingWith(AActor* enemy) const;
    
    UFUNCTION(BlueprintPure)
    EMaiParty GetParty() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetForcedEnemy() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetFightingEnemy() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChaseLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetArchEnemy() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAlertLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAlertInstigator() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceChase(AActor* enemy, bool clearWhenPerceived);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* FindEnemyToFight();
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoreAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearForceChase();
    
};

