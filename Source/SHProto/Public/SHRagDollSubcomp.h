#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcomponentBase.h"
#include "SHRagDollSubcompSettings.h"
#include "SHRagDollSubcomp.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHRagDollSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSHRagDollSubcompSettings RagDollSettings;
    
public:
    USHRagDollSubcomp();

};

