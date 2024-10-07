#pragma once
#include "CoreMinimal.h"
#include "Components/LineBatchComponent.h"
#include "MaiNavLinkDrawer.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNavLinkDrawer : public ULineBatchComponent {
    GENERATED_BODY()
public:
    UMaiNavLinkDrawer(const FObjectInitializer& ObjectInitializer);

};

