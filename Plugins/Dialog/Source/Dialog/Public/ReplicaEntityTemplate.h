#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FlowCharacterTemplate.h"
#include "ReplicaEntityTemplate.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UReplicaEntityTemplate : public UFlowCharacterTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle _ReplicaVoice;
    
    UReplicaEntityTemplate();

};

