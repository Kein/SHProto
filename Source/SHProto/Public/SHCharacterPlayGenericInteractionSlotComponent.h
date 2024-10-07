#pragma once
#include "CoreMinimal.h"
#include "SHCharacterPlayManagedInteractionSlotComponent.h"
#include "SHInteractionGenericSlot.h"
#include "SHInteractionGenericStopData.h"
#include "SHCharacterPlayGenericInteractionSlotComponent.generated.h"

class ISHInteractionGeneric;
class USHInteractionGeneric;
class USHInteractionGenericComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayGenericInteractionSlotComponent : public USHCharacterPlayManagedInteractionSlotComponent, public ISHInteractionGenericSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TScriptInterface<ISHInteractionGeneric> ActiveInteraction;
    
    UPROPERTY(Instanced)
    USHInteractionGenericComponent* GenericObject;
    
public:
    USHCharacterPlayGenericInteractionSlotComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ProcessGenericInteractionStop(const FSHInteractionGenericStopData& StopData) override PURE_VIRTUAL(ProcessGenericInteractionStop,);
    
};

