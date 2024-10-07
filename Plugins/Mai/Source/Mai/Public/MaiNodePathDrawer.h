#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "MaiNodePathDrawer.generated.h"

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNodePathDrawer : public UBillboardComponent {
    GENERATED_BODY()
public:
    UMaiNodePathDrawer(const FObjectInitializer& ObjectInitializer);

};

