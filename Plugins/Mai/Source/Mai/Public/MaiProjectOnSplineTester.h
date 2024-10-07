#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "MaiProjectOnSplineTester.generated.h"

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiProjectOnSplineTester : public UBillboardComponent {
    GENERATED_BODY()
public:
    UMaiProjectOnSplineTester(const FObjectInitializer& ObjectInitializer);

};

