#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMaiDifficultyLevel.h"
#include "EPartyAttitude.h"
#include "PartyAttitudes.h"
#include "Templates/SubclassOf.h"
#include "MaiManager.generated.h"

class AMaiDebugger;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPartyAttitudes _Attitudes;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AMaiDebugger> _DebuggerClass;
    
    UPROPERTY()
    AMaiDebugger* _Debugger;
    
    UMaiManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPartyAttitude(uint8 partyID1, uint8 partyID2, EPartyAttitude attitude);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNavigationForStreamingLevel(bool set);
    
    UFUNCTION(Exec)
    void NegateBool(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockNavMeshGeneration(bool lock, FName Reason);
    
    UFUNCTION(BlueprintPure)
    EPartyAttitude GetPartyAttitude(uint8 partyID1, uint8 partyID2) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static EMaiDifficultyLevel getDifficultyLevel(const UObject* WorldContext);
    
};

