#pragma once
#include "CoreMinimal.h"
#include "EBeingWalkingStance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DaiConditions.h"
#include "DaiNotifies.h"
#include "GameFramework/Actor.h"
#include "MaiActionStartedDelegate.h"
#include "MaiEditorSelectableInterface.h"
#include "MaiWork.h"
#include "Templates/SubclassOf.h"
#include "MaiActionPoint.generated.h"

class AMaiActionPoint;
class AMaiController;
class UArrowComponent;
class UDaiCondition;
class UMaiActionSequenceComponent;
class UMaiAreaComponent;
class USceneComponent;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS()
class MAI_API AMaiActionPoint : public AActor, public IMaiEditorSelectableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* _MarkerMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiAreaComponent* _WorkArea;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UArrowComponent* _Arrow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UTextRenderComponent* _Text;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLinearColor _Color;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<AMaiController*> _Users;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool _HasTravelConditions;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool _IsGraphPoint;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<UDaiCondition> _OldConditionClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<UDaiCondition> _NewConditionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBeingWalkingStance _WalkingStanceEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _MaxUsers;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    uint32 _UseCounter;
    
    UPROPERTY(EditAnywhere)
    uint8 _UseOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 _Enabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _Skipable: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 _PlacedInWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _WaypointOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _MoveExaclyToAP: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _StopsToAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _RotateToAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RotateToActionPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMaiWork> _WorkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiConditions _UseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiNotifies _TravelNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiNotifies _AbandonNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiConditions _TravelConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMaiWork> _WaitWorkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<AMaiActionPoint*, uint8> _Destinations;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<USceneComponent*> _ShowComponents;
    
    UPROPERTY(BlueprintAssignable)
    FMaiActionStarted OnActionStarted;
    
    AMaiActionPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Used();
    
    UFUNCTION(BlueprintCallable)
    void ResetUseCounter();
    
    UFUNCTION(BlueprintNativeEvent)
    void PrepareToWork(AMaiController* User);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrepareActionSet(AMaiController* User);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlaceInWorld();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionPointSelected(AMaiController* User);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionPointReached(AMaiController* User);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionPointAbandoned(AMaiController* User);
    
    UFUNCTION(BlueprintPure)
    bool IsVisibleFrom(const FVector& Location, float defaultVisibilityRange, float perceptionMod) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsUsableBy(AMaiController* User) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsable() const;
    
    UFUNCTION(BlueprintPure)
    bool InDetectionArea(const FVector& Location, float areaExtent) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyWork() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetWeight() const;
    
    UFUNCTION(BlueprintPure)
    UMaiActionSequenceComponent* GetSequence(FName sequenceTag) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetActionRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeUsedBy(AMaiController* User) const;
    

    // Fix for true pure virtual functions not being implemented
};

