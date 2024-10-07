#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SHDoorsSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class USHDoorsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> DoorAttachmentKeysDataTable;
    
public:
    USHDoorsSettings();

};

