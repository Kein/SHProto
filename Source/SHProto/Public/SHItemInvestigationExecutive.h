#pragma once
#include "CoreMinimal.h"
#include "SHItemExecutiveBase.h"
#include "Templates/SubclassOf.h"
#include "SHItemInvestigationExecutive.generated.h"

class ASHItemInvestigationExecutive;
class ASHMapRenderer;
class UObject;
class USHCineCameraComponent;
class USHItemExeCameraManagerComponent;
class USHItemExeFlashlightManagerComponent;
class USHTranscriptData;
class USceneComponent;
class USpotLightComponent;

UCLASS(Abstract)
class SHPROTO_API ASHItemInvestigationExecutive : public ASHItemExecutiveBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHItemInvestigationExeEvent, ASHItemInvestigationExecutive*, ExecutivePtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHCineCameraComponent* InvestigationCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* InvestigationSpotLight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* FlashlightTarget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHItemExeCameraManagerComponent* CameraManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHItemExeFlashlightManagerComponent* FlashlightManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideDLCSkinDuringMainInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LookAtAlphaBlendInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LookAtAlphaBlendOutSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHMapRenderer> MapRendererClass;
    
    UPROPERTY(BlueprintAssignable, EditDefaultsOnly)
    FSHItemInvestigationExeEvent OnPreInvestigationStartedEvent;
    
    UPROPERTY(BlueprintAssignable, EditDefaultsOnly)
    FSHItemInvestigationExeEvent OnMainInvestigationStartedEvent;
    
    UPROPERTY(BlueprintAssignable, EditDefaultsOnly)
    FSHItemInvestigationExeEvent OnPostInvestigationStartedEvent;
    
    UPROPERTY(Transient)
    ASHMapRenderer* MapRenderer;
    
public:
    ASHItemInvestigationExecutive(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTranscirptBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchItemBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateItemBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetExitBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTranscriptData(TSoftObjectPtr<USHTranscriptData> InCustomTranscriptData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllActionsBlocked(const bool Blocked, const UObject* Object);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartInvestigation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSwitched();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTranscirptBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSwitchItemBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRotateItemBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExitBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllActionsBlocked() const;
    
protected:
    UFUNCTION()
    void HandlePreInvestigationSetupFinish();
    
};

