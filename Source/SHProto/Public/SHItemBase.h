#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "SHItemBase.generated.h"

class ACharacter;
class ASHItemBase;
class ASHItemExecutiveBase;
class ASHItemInvestigationExecutive;
class UMeshComponent;
class UObject;
class USHItemAudioComponent;

UCLASS()
class ASHItemBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHItemBaseWithExecutiveEvent, ASHItemBase*, ItemPtr, ASHItemExecutiveBase*, ExecutivePtr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHItemBaseEvent, ASHItemBase*, ItemPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHItemAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle ItemData;
    
    UPROPERTY(BlueprintAssignable, EditDefaultsOnly)
    FSHItemBaseWithExecutiveEvent OnExecutiveInitEvent;
    
    UPROPERTY(Transient)
    ACharacter* InteractingCharacter;
    
public:
    ASHItemBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Unequip();
    
    UFUNCTION(BlueprintCallable)
    void SetItemDisabled(const bool bInDisabled, const UObject* InObject);
    
    UFUNCTION(BlueprintPure)
    bool IsItemDisabled() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetInteractingCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    bool Equip(const FName SocketName, const FVector RelativeLocation, const FVector RelativeRotation);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementablePreInvestigationStarted(ASHItemInvestigationExecutive* InvestigationExecutive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementablePostInvestigationStarted(ASHItemInvestigationExecutive* InvestigationExecutive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableMainInvestigationStarted(ASHItemInvestigationExecutive* InvestigationExecutive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableInvestigationSwitchedItem(ASHItemInvestigationExecutive* InvestigationExecutive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableInvestigationInputChanged(ASHItemInvestigationExecutive* InvestigationExecutive, float AnimationTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableInvestigationFlip(ASHItemInvestigationExecutive* InvestigationExecutive, bool SideB);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableExecutiveInit(ASHItemExecutiveBase* Executive);
    
};

