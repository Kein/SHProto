#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHMapDataConfigStruct.h"
#include "SHGameplayMapItemComponent.generated.h"

class AActor;
class ASHItem;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHGameplayMapItemComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bWantAdditionalGameplayMapHintSignObject;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FSHMapDataConfigStruct GameplayMapHintSignObjectConfig;
    
    UPROPERTY(SaveGame)
    bool bWasAddedToMap;
    
public:
    USHGameplayMapItemComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessItemCollected(ASHItem* ItemPtr);
    
};

