#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "MaiNavAreaGetterInterface.h"
#include "MaiNavModifierComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNavModifierComponent : public UNavModifierComponent, public IMaiNavAreaGetterInterface {
    GENERATED_BODY()
public:
    UMaiNavModifierComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

