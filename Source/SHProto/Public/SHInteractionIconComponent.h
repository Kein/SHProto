#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UE4InputHandle.h"
#include "ESHInteractionIconOpacityState.h"
#include "ESHInteractionIconState.h"
#include "ESHInteractionIconType.h"
#include "SHInteractionIconComponent.generated.h"

class AActor;
class UCurveFloat;
class USHInteractionIconManagerComponent;
class USHInteractionIconSlotComponent;
class USHInteractionIconWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHInteractionIconComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUE4InputHandle InputHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHInteractionIconType Type;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESHInteractionIconOpacityState OpacityState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OpacityIgnoreSelf;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OpacityIgnoreFriend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasDisabledSlotsManagement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TrackSlotLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmallestSlotDistanceImprovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SlotManagementIgnoreOwnerActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SlotManagementIgnoreObservedActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    ESHInteractionIconState State;
    
    UPROPERTY(Instanced, Transient)
    USHInteractionIconManagerComponent* IconManager;
    
    UPROPERTY(Instanced, Transient)
    USHInteractionIconWidget* IconWidget;
    
    UPROPERTY(Instanced, Transient)
    USHInteractionIconSlotComponent* CurrentSlot;
    
    UPROPERTY(Instanced, Transient)
    TArray<USHInteractionIconSlotComponent*> Slots;
    
    UPROPERTY(Transient)
    AActor* ObservedActor;
    
    UPROPERTY(Transient)
    AActor* FriendActor;
    
    UPROPERTY(Transient)
    UCurveFloat* ScaleDistanceCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* ScaleResolutionCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* ScaleFovCurve;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* OriginalParent;
    
public:
    USHInteractionIconComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetState(const ESHInteractionIconState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetFriendActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool HasObservedActor() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFriendActor() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetOpacity() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetObservedActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetFriendActor() const;
    
    UFUNCTION(BlueprintPure)
    float CalculateDesiredScale() const;
    
};

