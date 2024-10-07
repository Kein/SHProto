#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SHItemsSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class USHItemsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> ItemsDataTable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> WeaponsDataTable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> EquipmentDataTable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> UseablesDataTable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> MapsDataTable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> CombineItemsRecipesDataTable;
    
public:
    USHItemsSettings();

};

