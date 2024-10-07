#pragma once
#include "CoreMinimal.h"
#include "SHAIWeapon.h"
#include "SHAIRangedWeapon.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHAIRangedWeapon : public ASHAIWeapon {
    GENERATED_BODY()
public:
    ASHAIRangedWeapon(const FObjectInitializer& ObjectInitializer);

};

