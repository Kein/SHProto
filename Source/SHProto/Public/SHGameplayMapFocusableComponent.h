#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHMapDataConfigStruct.h"
#include "SHGameplayMapFocusableComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USHFocusableComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHGameplayMapFocusableComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FocusableCustomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bWantAdditionalGameplayMapHintObject;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FSHMapDataConfigStruct GameplayMapHintObjectConfig;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FName GameplayMapHintArrowObjectID;
    
    UPROPERTY(SaveGame)
    bool bWasFocusableAddedToMap;
    
    UPROPERTY(SaveGame)
    bool bWasHintAddedToMap;
    
public:
    USHGameplayMapFocusableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessFocusableSolvedEvent(USHFocusableComponent* FocusableComponentPtr);
    
    UFUNCTION()
    void ProcessFocusableShownEvent(USHFocusableComponent* FocusableComponentPtr);
    
};

