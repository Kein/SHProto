#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "SHGameplayTutorialCoreData.generated.h"

USTRUCT(BlueprintType)
struct FSHGameplayTutorialCoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TutorialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldUpdateOnDeviceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUE4InputHandle> TextArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeoutValue;
    
    SHPROTO_API FSHGameplayTutorialCoreData();
};

