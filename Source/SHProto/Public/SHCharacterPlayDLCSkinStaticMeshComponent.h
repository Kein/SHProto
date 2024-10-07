#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SHCharacterPlayDLCSkinStaticMeshComponent.generated.h"

class UObject;
class USHDLCSkinSettingsDataAsset;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayDLCSkinStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHDLCSkinSettingsDataAsset* Settings;
    
public:
    USHCharacterPlayDLCSkinStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool ShouldBeHidden() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeHidden(const bool bInHidden, const UObject* Object);
    
};

