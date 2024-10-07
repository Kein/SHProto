#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESHGameplayTutorialEnum.h"
#include "SHGameplayTutorialCoreData.h"
#include "SHGameplayTutorialData.h"
#include "SHGameplayTutorialsDatabase.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHGameplayTutorialsDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHGameplayTutorialEnum, FSHGameplayTutorialData> Database;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHGameplayTutorialEnum, FSHGameplayTutorialCoreData> ScriptedDatabase;
    
    USHGameplayTutorialsDatabase();

};

