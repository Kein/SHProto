#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCharacterPlayBrainComponent.generated.h"

class ASHCharacterPlay;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayBrainComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InventoryMapHoldValue;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCharacterPlayBrainComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_Input_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Input_FreezeControlRotation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUpdateControlRotationWhenIsNotMoving(const bool Update, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateControlRotationBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayMenuBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRotationInterpSpeed(const float Speed, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsUpdateControlRotationBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameplayMenuBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUpdateControlRotationWhenIsNotMoving() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearControlRotationInterpSpeed(const UObject* Object);
    
};

