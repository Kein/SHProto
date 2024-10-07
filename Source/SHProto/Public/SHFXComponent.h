#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHFXComponent.generated.h"

class USHFXSubcomponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TSet<USHFXSubcomponent*> OwnedSubcomponents;
    
public:
    USHFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    USHFXSubcomponent* FindSubcomponentByClass(const TSubclassOf<USHFXSubcomponent> SubcomponentClass) const;
    
};

