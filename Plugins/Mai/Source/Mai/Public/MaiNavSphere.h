#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "MaiNavShape.h"
#include "Templates/SubclassOf.h"
#include "MaiNavSphere.generated.h"

class UNavArea;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMaiNavSphere : public USphereComponent, public IMaiNavShape {
    GENERATED_BODY()
public:
    UMaiNavSphere(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> newAreaClass);
    
    UFUNCTION(BlueprintPure)
    bool IsInArea(FVector Location, float Extent) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableArea();
    
    UFUNCTION(BlueprintCallable)
    void DisableArea();
    

    // Fix for true pure virtual functions not being implemented
};

