#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EGameBaseInputDevice.h"
#include "ESHInteractionGenericBehaviour.h"
#include "SHInteractionGeneric.h"
#include "SHInteractionGenericConfig.h"
#include "SHInteractionGenericStopData.h"
#include "SHManagedInteractionSlotCleanupConfig.h"
#include "SHInteractionGenericComponent.generated.h"

class ASHCharacterPlay;
class ISHInteractionGenericSlot;
class USHInteractionGenericSlot;
class USHInteractionGenericComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHInteractionGenericComponent : public USceneComponent, public ISHInteractionGeneric {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReleasedByCharacterBP, USHInteractionGenericComponent*, Generic, ASHCharacterPlay*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FProcessInputBP, USHInteractionGenericComponent*, Generic, ASHCharacterPlay*, Character, FVector2D, Input, EGameBaseInputDevice, Device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHeldByCharacterBP, USHInteractionGenericComponent*, Generic, ASHCharacterPlay*, Character, float, DeltaTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrabbedByCharacterBP, USHInteractionGenericComponent*, Generic, ASHCharacterPlay*, Character);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FGrabbedByCharacterBP OnGrabbedByCharacterBP;
    
    UPROPERTY(BlueprintAssignable)
    FReleasedByCharacterBP OnReleasedByCharacterBP;
    
    UPROPERTY(BlueprintAssignable)
    FHeldByCharacterBP OnHeldByCharacterBP;
    
    UPROPERTY(BlueprintAssignable)
    FProcessInputBP OnProcessInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHInteractionGenericConfig Config;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHInteractionGenericBehaviour Behaviour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool MaintainInteractionOnVisibilityLost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideCleanupConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHManagedInteractionSlotCleanupConfig CleanupConfig;
    
    UPROPERTY(Transient)
    TScriptInterface<ISHInteractionGenericSlot> ActiveSlot;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* ActiveCharacter;
    
public:
    USHInteractionGenericComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsUsed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeldByCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClickable() const;
    
    UFUNCTION(BlueprintPure)
    ESHInteractionGenericBehaviour GetBehaviour() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopGenericInteraction(const FSHInteractionGenericStopData& StopData) override PURE_VIRTUAL(StopGenericInteraction,);
    
    UFUNCTION(BlueprintCallable)
    FSHInteractionGenericConfig GetGenericConfig() const override PURE_VIRTUAL(GetGenericConfig, return FSHInteractionGenericConfig{};);
    
    UFUNCTION(BlueprintCallable)
    USHInteractionGenericComponent* GetGeneric() override PURE_VIRTUAL(GetGeneric, return NULL;);
    
};

