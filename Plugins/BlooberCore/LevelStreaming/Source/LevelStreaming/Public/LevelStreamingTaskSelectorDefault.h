#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTaskSelector.h"
#include "LevelStreamingTaskSelectorDefault.generated.h"

UCLASS(BlueprintType)
class LEVELSTREAMING_API ULevelStreamingTaskSelectorDefault : public ULevelStreamingTaskSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShowPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HidePriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LoadingPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 UnloadingPriority;
    
    ULevelStreamingTaskSelectorDefault();

};

