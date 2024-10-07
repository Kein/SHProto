#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "PersistentSaveData.generated.h"

UCLASS(Abstract, BlueprintType)
class GAMEBASE_API UPersistentSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 PlayCounter;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 LastSelectedSlot;
    
    UPROPERTY()
    FGuid LastPlaythroughId;
    
public:
    UPersistentSaveData();

};

