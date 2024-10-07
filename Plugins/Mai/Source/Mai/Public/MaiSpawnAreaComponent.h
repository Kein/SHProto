#pragma once
#include "CoreMinimal.h"
#include "MaiAreaComponent.h"
#include "MaiSpawnAreaComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiSpawnAreaComponent : public UMaiAreaComponent {
    GENERATED_BODY()
public:
    UMaiSpawnAreaComponent(const FObjectInitializer& ObjectInitializer);

};

