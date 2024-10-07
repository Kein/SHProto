#pragma once
#include "CoreMinimal.h"
#include "ESHGameplayTutorialEnum.h"
#include "SHSpawnpointTutorialsDataSet.generated.h"

USTRUCT(BlueprintType)
struct FSHSpawnpointTutorialsDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SpawnPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHGameplayTutorialEnum> CummulativeTutorials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHGameplayTutorialEnum> RemoveFromCummulativeTutorials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHGameplayTutorialEnum> ThisSpawnpointOnlyTutorials;
    
    SHPROTO_API FSHSpawnpointTutorialsDataSet();
};

