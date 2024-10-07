#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHGameplayTutorialEnum.h"
#include "SHCharacterPlayTutorialsComponent.generated.h"

class USHGameplayTutorialsDatabase;
class USHTutorialHandlerBase;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayTutorialsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ConsumeQueueDelayValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHGameplayTutorialsDatabase* TutorialsDatabase;
    
    UPROPERTY(Transient)
    TArray<USHTutorialHandlerBase*> TutorialHandlers;
    
    UPROPERTY(SaveGame)
    TArray<ESHGameplayTutorialEnum> RegisteredTutorialActions;
    
public:
    USHCharacterPlayTutorialsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_Tutorials_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Tutorials_ResetRegisterActions();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Tutorials_RequestShowTutorial(int32 TutorialEnumAsInt);
    
    UFUNCTION()
    void ProcessTutorialWidgetHideEvent();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTutorialActionRegistered(const ESHGameplayTutorialEnum InTutorialEnum) const;
    
};

