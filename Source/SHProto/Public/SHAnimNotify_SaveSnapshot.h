#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_SaveSnapshot.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_SaveSnapshot : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SnapshotName;
    
    USHAnimNotify_SaveSnapshot();

};

