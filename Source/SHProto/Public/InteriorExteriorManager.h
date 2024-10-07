#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHInteriorExteriorStateEnum.h"
#include "InteriorExteriorManager.generated.h"

class AActor;
class ASHInteriorExteriorVolume;
class UInteriorExteriorManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInteriorExteriorManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<ASHInteriorExteriorVolume*> InteriorExteriorVolumes;
    
    UInteriorExteriorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UInteriorExteriorManager* getInstance(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    ESHInteriorExteriorStateEnum CalcInteriorExteriorState(AActor* Actor) const;
    
};

