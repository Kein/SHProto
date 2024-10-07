#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "PaintableStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INSTANCEDMESHEX_API UPaintableStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor ClearColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ClearAtBeginPlay;
    
    UPaintableStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PaintSphere(FVector SphereCenter, float SphereRadius, FColor PaintColor, float AlphaMultiplier, float FalloffExponent, bool AdditivePainting);
    
    UFUNCTION(BlueprintCallable)
    void ClearPainting(FColor PaintColor, float AlphaMultiplier);
    
};

