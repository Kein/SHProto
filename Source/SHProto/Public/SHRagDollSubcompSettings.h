#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcompSettings.h"
#include "SHRagDollSubcompBoneChainSettings.h"
#include "SHRagDollSubcompSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHRagDollSubcompSettings : public FSHAnimSubcompSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName RagDollPhysicsIdentifier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHRagDollSubcompBoneChainSettings> RagDollBoneChains;
    
public:
    FSHRagDollSubcompSettings();
};

