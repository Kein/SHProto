#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "DaiBlockade.h"
#include "DaiFloatModifiers.h"
#include "DaiFloatModifiers2.h"
#include "Components/ActorComponent.h"
#include "EMaiAggroStance.h"
#include "EMaiSenseType.h"
#include "MaiAggroConfig.h"
#include "MaiAggroDifficulty.h"
#include "MaiAggroStanceDelegate.h"
#include "MaiAggroMeter.generated.h"

class AAIController;
class AActor;
class UDaiFloatModifier;
class UMaiAggroMeter;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiAggroMeter : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, SaveGame)
    FDaiBlockade _BlockDecay;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, SaveGame)
    FDaiBlockade _BlockGain;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, SaveGame)
    FDaiBlockade _BlockGain_Weak;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 _WeakSenses[7];
    
    UPROPERTY(EditAnywhere)
    FMaiAggroConfig _Configs[3];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> _ExtraStances;
    
    UPROPERTY(EditAnywhere)
    FMaiAggroDifficulty _DifficultyConfig[10];
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    float _Aggro;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    float _TimeSinceLastAccumulate;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TMap<AActor*, float> _HateList;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<AActor*> _IgnoreList;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    EMaiAggroStance _BehaviorStance;
    
    UPROPERTY()
    AAIController* _Controller;
    
    UPROPERTY(EditAnywhere)
    FDaiFloatModifiers _AggroDecayCooldownMod;
    
    UPROPERTY(EditAnywhere)
    FDaiFloatModifiers _AggroDecayMod;
    
    UPROPERTY(EditAnywhere)
    FDaiFloatModifiers2 _AggroGainMods[7];
    
    UPROPERTY(BlueprintAssignable)
    FMaiAggroStance AggroStanceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FMaiAggroStance BehaviorStanceChanged;
    
    UMaiAggroMeter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WeakDisableGain(bool disable, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetBehaviorStance(EMaiAggroStance stance);
    
    UFUNCTION(BlueprintCallable)
    void SetAggro(float NewAggro, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGainMod(UDaiFloatModifier* mod, EMaiSenseType sense, FName Name);
    
private:
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNeutral() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCautious() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAggroGainDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAggressive() const;
    
    UFUNCTION(BlueprintPure)
    float GetStanceMinAggro(EMaiAggroStance stance) const;
    
    UFUNCTION(BlueprintPure)
    float GetStanceMaxAggro(EMaiAggroStance stance) const;
    
    UFUNCTION(BlueprintPure)
    EMaiAggroStance GetStance() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EMaiSenseType getSenseTypeForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus);
    
    UFUNCTION(BlueprintPure)
    AActor* GetMostHated() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugText() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetDebugColor() const;
    
    UFUNCTION(BlueprintPure)
    EMaiAggroStance GetBehaviorStance() const;
    
    UFUNCTION(BlueprintCallable)
    static UMaiAggroMeter* getAggroMeter(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    float GetAggro() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableGain(bool disable, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void DisableDecay(bool disable, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void ClearWeakDisableGain();
    
    UFUNCTION(BlueprintCallable)
    void AddGainMod(UDaiFloatModifier* mod, EMaiSenseType sense, FName Name);
    
    UFUNCTION(BlueprintCallable)
    void AddAggro(float Aggro, bool Force);
    
};

