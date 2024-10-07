#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaiWork.h"
#include "MaiWorkSet.generated.h"

UCLASS(BlueprintType)
class MAI_API UMaiWorkSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMaiWork> _WorkList;
    
    UMaiWorkSet();

};

