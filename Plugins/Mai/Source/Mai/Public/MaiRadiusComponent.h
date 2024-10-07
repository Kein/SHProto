#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/LineBatchComponent.h"
#include "MaiRadiusComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiRadiusComponent : public ULineBatchComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor _Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Radius;
    
    UMaiRadiusComponent(const FObjectInitializer& ObjectInitializer);

};

