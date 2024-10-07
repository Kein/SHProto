#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCharacterPlayAdaptiveTriggersManager.generated.h"

class UObject;
class USHAdaptiveTriggersManagerSettings;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayAdaptiveTriggersManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    USHAdaptiveTriggersManagerSettings* AdaptiveTriggersSettings;
    
public:
    USHCharacterPlayAdaptiveTriggersManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Controller_ValuesDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool InEnable, UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

