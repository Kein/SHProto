#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/CapsuleComponent.h"
#include "MaiNavShape.h"
#include "Templates/SubclassOf.h"
#include "MaiNavCapsule.generated.h"

class UNavArea;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMaiNavCapsule : public UCapsuleComponent, public IMaiNavShape {
    GENERATED_BODY()
public:
    UMaiNavCapsule(const FObjectInitializer& ObjectInitializer);

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

