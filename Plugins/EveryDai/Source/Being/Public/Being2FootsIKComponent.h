#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BeingFootsIKComponent.h"
#include "FootData.h"
#include "Being2FootsIKComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeing2FootsIKComponent : public UBeingFootsIKComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _LeftFootSocket;
    
    UPROPERTY(EditAnywhere)
    FName _RightFootSocket;
    
    UPROPERTY(EditAnywhere)
    FName _LeftFingersSocket;
    
    UPROPERTY(EditAnywhere)
    FName _RightFingersSocket;
    
    UPROPERTY(VisibleInstanceOnly)
    FFootData _FootsData[2];
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _LeftFootOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _RightFootOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FRotator _LeftFootRotator;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FRotator _RightFootRotator;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _TimeToNextStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _PredictionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _EnablePredictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _OldIKUpdate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _IKTryUseCache;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _DropTryUseCache;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _IKInterpEaseIn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _DropInterpEaseIn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _DynamicDropInterp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _InterpEaseMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _InterpEaseSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _WeldGround;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _StairStepHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _MaxAllowedAngle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _WalkStepDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _WalkStepLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _RunStepDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _RunStepLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _WalkUpStairsPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _WalkDownStairsPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RunUpStairsPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RunDownStairsPlayRate;
    
    UBeing2FootsIKComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsOnUpStairs() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnStairs() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnSlope() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnDownStairs() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeedWarping() const;
    
    UFUNCTION(BlueprintPure)
    FFootData GetRightFootData() const;
    
    UFUNCTION(BlueprintPure)
    FFootData GetLeftFootData() const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimMods(float& PlayRate, float& speedWarping) const;
    
    UFUNCTION(BlueprintCallable)
    void ExitStairs();
    
    UFUNCTION(BlueprintCallable)
    void ExitSlope();
    
    UFUNCTION(BlueprintCallable)
    void EnterStairs(float stepHeight);
    
    UFUNCTION(BlueprintCallable)
    void EnterSlope(float stepHeight);
    
};

