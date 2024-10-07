#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpawnPointData.h"
#include "SpawnPointEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointsListWidget.generated.h"

class UPanelWidget;
class USpawnPointWidget;
class USpawnPointsConfig;

UCLASS(EditInlineNew)
class SIMPLESPAWNPOINTS_API USpawnPointsListWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USpawnPointsConfig> ConfigPath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USpawnPointWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Items_box;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnPointEvent OnSpawnPointSelected;
    
    USpawnPointsListWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnAddItem(const FSpawnPointData& Data) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasData() const;
    
    UFUNCTION(BlueprintCallable)
    void ForEachSpawnPointData();
    
};

