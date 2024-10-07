#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "BlooberAkVisualizationComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLOOBERWWISE_API UBlooberAkVisualizationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DbgScreenPosition;
    
    UBlooberAkVisualizationComponent(const FObjectInitializer& ObjectInitializer);

};

