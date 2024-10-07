#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "MaiNavAreaGetterInterface.h"
#include "MaiNavLinkComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNavLinkComponent : public UNavLinkCustomComponent, public IMaiNavAreaGetterInterface {
    GENERATED_BODY()
public:
    UMaiNavLinkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLinkEnabled(bool newEnabled);
    

    // Fix for true pure virtual functions not being implemented
};

