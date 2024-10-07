#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimNotifyQueue.h"
#include "AnimNotify_SHAkEvent.generated.h"

class UAkAudioEvent;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Abstract, CollapseCategories)
class SHPROTO_API UAnimNotify_SHAkEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_SHAkEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProcessNotify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference, const FString& AttachName, UAkAudioEvent* AudioEvent, bool bFollow, bool bCreatedComponentDestroyOnFinish, float CreatedComponentOcclusionRefreshInverval) const;
    
};

