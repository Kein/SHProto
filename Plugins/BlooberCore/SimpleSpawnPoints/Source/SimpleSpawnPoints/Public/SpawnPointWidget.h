#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpawnPointData.h"
#include "SpawnPointEventDelegate.h"
#include "SpawnPointWidget.generated.h"

class UBButton;

UCLASS(EditInlineNew)
class SIMPLESPAWNPOINTS_API USpawnPointWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FSpawnPointData Data;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Slot_but;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpawnPointEvent OnClicked;
    
    USpawnPointWidget();

};

