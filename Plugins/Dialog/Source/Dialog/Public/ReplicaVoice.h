#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ReplicaVoice.generated.h"

USTRUCT(BlueprintType)
struct FReplicaVoice : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString UUID;
    
    DIALOG_API FReplicaVoice();
};

