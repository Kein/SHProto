#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHDynamicInteractionManagerComponent.generated.h"

class ASHDynamicInteractionExecutive;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHDynamicInteractionManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHDynamicInteractionExecutive* SpawnedInteractionExe;
    
public:
    USHDynamicInteractionManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASHDynamicInteractionExecutive* SpawnInteractionExecutive(TSubclassOf<ASHDynamicInteractionExecutive> InteractionExeClass);
    
    UFUNCTION(BlueprintPure)
    ASHDynamicInteractionExecutive* GetSpawnedInteractionExecutive() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroySpawnedInteractionExecutive();
    
};

