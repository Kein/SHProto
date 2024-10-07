#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateWidget.h"
#include "GameModeMenuController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASE_API UGameModeMenuController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<FName, FStateWidget> StateWidgets;
    
public:
    UGameModeMenuController(const FObjectInitializer& ObjectInitializer);

};

