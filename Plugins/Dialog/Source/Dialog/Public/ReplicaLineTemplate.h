#pragma once
#include "CoreMinimal.h"
#include "FlowLineLipsyncTemplate.h"
#include "ReplicaLineTemplate.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UReplicaLineTemplate : public UFlowLineLipsyncTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _ReplicaPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _ReplicaRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _ReplicaVolume;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString _ReplicaSpeechRequest;
    
    UReplicaLineTemplate();

};

