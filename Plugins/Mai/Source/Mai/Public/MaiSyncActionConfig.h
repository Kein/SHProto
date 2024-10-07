#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "MaiSyncActionConfig.generated.h"

class UMaiAction_SyncAnimations;

USTRUCT(BlueprintType)
struct FMaiSyncActionConfig : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _OwnerAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _OtherAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMaiAction_SyncAnimations> _ActionClass;
    
    MAI_API FMaiSyncActionConfig();
};

