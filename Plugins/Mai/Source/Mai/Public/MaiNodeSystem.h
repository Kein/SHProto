#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "MaiNodeSystem.generated.h"

class AActor;
class AMaiNodeGraphVolume;
class ANodeGraphTester;
class UMaiPathNodeComponent;
class USceneComponent;

UCLASS(BlueprintType)
class MAI_API UMaiNodeSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AMaiNodeGraphVolume*> _GraphVolumes;
    
    UPROPERTY(Instanced)
    TArray<UMaiPathNodeComponent*> _AllPathNodes;
    
    UPROPERTY()
    TArray<ANodeGraphTester*> _PathTesters;
    
    UMaiNodeSystem();

    UFUNCTION(BlueprintCallable)
    void UpdateInComponentBounds(USceneComponent* Scene);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInBounds(FBox Box);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInActorBounds(AActor* Actor);
    
};

