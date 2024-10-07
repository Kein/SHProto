#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "SHCameraAnimationData.h"
#include "Templates/SubclassOf.h"
#include "SHAIFinisherParams.generated.h"

class USHAIAction_Finisher;

USTRUCT(BlueprintType)
struct FSHAIFinisherParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _RequiredTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _OptionalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag _SlayerAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag _VictimAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USHAIAction_Finisher> _SyncAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraAnimationData _CameraAnimationData;
    
    SHPROTO_API FSHAIFinisherParams();
};

