#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_MBP3WallRun.generated.h"

UCLASS()
class SHPROTO_API UBTTask_MBP3WallRun : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag AnimTag;
    
    UPROPERTY(EditAnywhere)
    int32 StartingWallIndex;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSequences;
    
    UPROPERTY(EditAnywhere)
    bool bPickRandomIndex;
    
    UPROPERTY(EditAnywhere)
    bool bPlayAllSequences;
    
    UPROPERTY(EditAnywhere)
    float EndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float RandomDeviation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MontageStartSections;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MontageWallSections;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MontageEndSections;
    
public:
    UBTTask_MBP3WallRun();

};

