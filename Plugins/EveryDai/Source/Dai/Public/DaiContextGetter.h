#pragma once
#include "CoreMinimal.h"
#include "GraphObject.h"
#include "DaiContextGetter.generated.h"

UCLASS(Abstract, EditInlineNew)
class DAI_API UDaiContextGetter : public UGraphObject {
    GENERATED_BODY()
public:
    UDaiContextGetter();

};

