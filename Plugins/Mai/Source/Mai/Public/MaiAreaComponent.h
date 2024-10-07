#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMaiShapeType.h"
#include "MaiShape.h"
#include "MaiShapeDrawer.h"
#include "MaiAreaComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiAreaComponent : public UMaiShapeDrawer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor _Color;
    
    UPROPERTY(EditAnywhere)
    FMaiShape _Shape;
    
    UMaiAreaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsInArea(FVector Location, float Extent) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRandomPoint(float Extent) const;
    
    UFUNCTION(BlueprintPure)
    EMaiShapeType GetAreaShape(FVector& Extents);
    
};

