#pragma once
#include "CoreMinimal.h"
#include "MaiAreaComponent.h"
#include "MaiReincarnationInfo.h"
#include "MaiReincarnationComponent.generated.h"

class UMaiReincarnationComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiReincarnationComponent : public UMaiAreaComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMaiReincarnationInfo> _Data;
    
    UPROPERTY(EditAnywhere)
    uint8 _MaxNumber;
    
    UPROPERTY(VisibleAnywhere)
    bool _ReviveCountLimit;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleInstanceOnly)
    bool _OverridenParams;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleInstanceOnly)
    TArray<FMaiReincarnationInfo> _OverridenData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleInstanceOnly)
    uint8 _OverridenMaxNumber;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleInstanceOnly)
    uint8 _ReviveCounter;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleInstanceOnly)
    int32 _EnterCounter;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleInstanceOnly)
    bool _CalcEntrance;
    
    UMaiReincarnationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOverrideData(uint8 maxReincarnationNumber, TArray<FMaiReincarnationInfo> Data);
    
    UFUNCTION(BlueprintCallable)
    bool Reincarnate(float healthPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveReincarnateArea();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterReincarnateArea();
    
    UFUNCTION(BlueprintPure)
    uint8 GetSeizuresNumber() const;
    
    UFUNCTION(BlueprintCallable)
    void FillParams(UMaiReincarnationComponent* Other);
    
    UFUNCTION(BlueprintCallable)
    void EnableCalcEntrance();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseEnterCounter();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideData();
    
    UFUNCTION(BlueprintPure)
    bool AllowReincarnation() const;
    
};

