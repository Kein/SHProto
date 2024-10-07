#pragma once
#include "CoreMinimal.h"
#include "SHGameplayTutorialCoreData.h"
#include "SHGameplayTutorialData.generated.h"

USTRUCT(BlueprintType)
struct FSHGameplayTutorialData : public FSHGameplayTutorialCoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyExplicitRegisterAction;
    
    SHPROTO_API FSHGameplayTutorialData();
};

