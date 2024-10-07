#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHFreezingManagerComponent.generated.h"

class ASHFreezingVolume;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFreezingManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHFreezingVolume*> RegisteredFreezingVolumes;
    
public:
    USHFreezingManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    int32 GetRegisteredFreezingVolumeCount() const;
    
    UFUNCTION(BlueprintPure)
    ASHFreezingVolume* GetEncompassedFreezingVolume(const FVector& InLocation) const;
    
};

