#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "MaiBTTask_PlayAnimMontage.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UBehaviorTreeComponent;

UCLASS()
class MAI_API UMaiBTTask_PlayAnimMontage : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _SelectAnimByTag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UAnimSequenceBase* _AnimationToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(EditAnywhere)
    uint8 _SelectAnimByAngle: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _SelectAnimOnNav: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _NonBlocking: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _NonBlockingAbort: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _InfinitLoop: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _SelectAnimDir;
    
    UPROPERTY(EditAnywhere)
    FName _Slot;
    
    UPROPERTY(EditAnywhere)
    float _PlayRate;
    
    UPROPERTY(EditAnywhere)
    float _TimeToStartAt;
    
    UPROPERTY(EditAnywhere)
    float _AbortBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float _Duration;
    
    UPROPERTY(EditAnywhere)
    int32 _LoopCount;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _AbortAnimTags;
    
    UPROPERTY(EditAnywhere)
    FName _AbortSection;
    
    UPROPERTY(Instanced)
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY()
    UAnimMontage* _AbortMontage;
    
    UMaiBTTask_PlayAnimMontage();

};

