#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayUIComponent.generated.h"

class UCutsceneSkipWidget;
class USHControlTipsPanel;
class USHGameplayEndGameWidget;
class USHGameplayFocusWidget;
class USHGameplayGameOverWidget;
class USHGameplayHudWidget;
class USHGameplayItemInvestigationWidget;
class USHGameplayMenuWidget;
class USHGameplayReadingWidget;
class USHGameplaySaveMenuWidget;
class UUserWidget;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayGameOverWidget> GameplayGameOverWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayEndGameWidget> GameplayEndGameWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayHudWidget> GameplayHudWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayMenuWidget> GameplayMenuWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayFocusWidget> GameplayFocusWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayReadingWidget> GameplayReadingWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplaySaveMenuWidget> GameplaySaveMenuWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHGameplayItemInvestigationWidget> GameplayItemInvestigationWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHControlTipsPanel> ControlTipsPanelClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCutsceneSkipWidget> SkipWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UUserWidget> DeveloperToolWidgetClass;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayHudWidget* GameplayHudWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayMenuWidget* GameplayMenuWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayFocusWidget* GameplayFocusWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayReadingWidget* GameplayReadingWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayGameOverWidget* GameplayGameOverWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayEndGameWidget* GameplayEndGameWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplaySaveMenuWidget* GameplaySaveMenuWidget;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayItemInvestigationWidget* GameplayItemInvestigationWidget;
    
    UPROPERTY(Instanced, Transient)
    USHControlTipsPanel* ControlTipsPanel;
    
    UPROPERTY(Instanced, Transient)
    UCutsceneSkipWidget* SkipWidget;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* DeveloperToolWidget;
    
public:
    USHCharacterPlayUIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Tool_Show();
    
    UFUNCTION(Exec)
    void SHDebug_Tool_Hide();
    
    UFUNCTION(BlueprintPure)
    USHGameplayHudWidget* GetGameplayHudWidgetPointer() const;
    
};

