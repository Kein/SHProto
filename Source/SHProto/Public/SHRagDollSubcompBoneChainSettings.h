#pragma once
#include "CoreMinimal.h"
#include "SHRagDollSubcompBoneChainSettings.generated.h"

USTRUCT(BlueprintType)
struct FSHRagDollSubcompBoneChainSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName ChainName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SubChainNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BoneNames;
    
public:
    SHPROTO_API FSHRagDollSubcompBoneChainSettings();
};

