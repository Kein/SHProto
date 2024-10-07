#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DebugActorDelegate.h"
#include "DebuggerTickDelegate.h"
#include "MaiDebugPrintParams.h"
#include "MaiDebugger.generated.h"

class AMaiDebugger;
class APawn;
class UMaiSenseDebugger;
class UObject;

UCLASS()
class MAI_API AMaiDebugger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiSenseDebugger* AllSenses;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiSenseDebugger* HearingSense;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiSenseDebugger* SightSense;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiSenseDebugger* SmellSense;
    
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<AActor> _DebuggedActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugAutoActive: 1;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    uint8 _DebugActive: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugHearing: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugSight: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugSmell: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugNoises: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugVisibility: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugOdor: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugAggro: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugAttack: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugCuriosity: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugActionPath: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugNavPath: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugMovement: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, bool> _DebugState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugUnreal: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugNavMesh: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugAInfo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugBehaviorTree: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugEQS: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _DebugPerception: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 _DisableExtensions: 1;
    
    UPROPERTY(VisibleAnywhere)
    TArray<APawn*> _AllAIBeings;
    
    UPROPERTY(BlueprintAssignable)
    FDebugActor AIDebugActorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDebuggerTick AIDebuggerTick;
    
    AMaiDebugger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    static bool getAIDebugVisibility(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugState(APawn* Being, FName Name);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool getAIDebugSmell(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool getAIDebugSight(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugOdor(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugNoises(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugNavPath(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugMovement(APawn* Being);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool getAIDebugHearing(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool getAIDebugGState(UObject* WorldContext, FName Name);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMaiDebugger* getAIDebugger(UObject* WorldContext, bool onlyIfActive);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugCuriosity(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugAttack(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugAggro(APawn* Being);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static AActor* getAIDebugActor(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static bool getAIDebugActionPath(APawn* Being);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugVisibility(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugUnreal(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugState(FName Name, bool Debug);
    
    UFUNCTION(BlueprintCallable)
    void AIDebugSpectator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugSmell(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugSight(bool Debug);
    
    UFUNCTION(BlueprintCallable)
    static void aiDebugPrint2(AActor* Actor, const FString& InString, const FMaiDebugPrintParams& Params);
    
    UFUNCTION(BlueprintCallable)
    static void aiDebugPrint(AActor* Actor, const FString& InString, bool toScreen, bool toLog, FLinearColor Color, float Duration, bool IgnoreActor, const FString& Category);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugPrevActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugPerception(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugOdor(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugNoises(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugNextActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugNavPath(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugNavMesh(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugMovement(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugHearing(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugger(bool Activate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugEQSSwitch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugEQSDetails();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugEQS(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugCuriosity(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugBehaviorTree(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugAttack(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugAInfo(bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugAggro(bool Debug);
    
    UFUNCTION(BlueprintCallable)
    void AIDebugAddState(FName Name, bool Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugActor(FName Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDebugActionPath(bool Debug);
    
};

