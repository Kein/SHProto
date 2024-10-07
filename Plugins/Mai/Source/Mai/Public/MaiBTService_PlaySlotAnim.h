#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "MaiBTService_PlaySlotAnim.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS()
class MAI_API UMaiBTService_PlaySlotAnim : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _SelectAnimByTag;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* _AnimationToPlay;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(EditAnywhere)
    float _PlayRate;
    
    UPROPERTY(EditAnywhere)
    float _TimeToStartAt;
    
    UPROPERTY(EditAnywhere)
    FName _Slot;
    
    UPROPERTY(EditAnywhere)
    float _BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float _BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    int32 _LoopCount;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _PlayTimeOutput;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* CachedSkelMesh;
    
    UPROPERTY()
    UAnimMontage* _PlayedMontage;
    
public:
    UMaiBTService_PlaySlotAnim();

};

