#pragma once
#include "CoreMinimal.h"
#include "SHCharacterPlayInteractionSlotComponent.h"
#include "SHManagedInteractionSlotCleanupConfig.h"
#include "SHCharacterPlayManagedInteractionSlotComponent.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayManagedInteractionSlotComponent : public USHCharacterPlayInteractionSlotComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MouseRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PadRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHManagedInteractionSlotCleanupConfig CleanupConfig;
    
public:
    USHCharacterPlayManagedInteractionSlotComponent(const FObjectInitializer& ObjectInitializer);

};

