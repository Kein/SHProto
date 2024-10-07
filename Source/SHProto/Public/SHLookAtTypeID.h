#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHLookAtTypeID.generated.h"

UCLASS(Abstract, EditInlineNew, Within=SHCharacterLookAtLogicComponent)
class SHPROTO_API USHLookAtTypeID : public UObject {
    GENERATED_BODY()
public:
    USHLookAtTypeID();

};

