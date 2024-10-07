#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "BGameModeBase.generated.h"

class AActor;
class UBaseGameModeController;
class UGameModeMenuController;
class UPlayerProfile;

UCLASS(Abstract, NonTransient)
class GAMEBASE_API ABGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameModePlayerSettingsChanged, UPlayerProfile*, Settings);
    
protected:
    UPROPERTY()
    TSubclassOf<AActor> SpawnPointClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGameModeMenuController* MenuController;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBaseGameModeController* BaseGameModeController;
    
public:
    UPROPERTY(BlueprintAssignable)
    FGameModePlayerSettingsChanged OnPlayerSettingsChanged;
    
    ABGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowInGameMenu();
    
};

