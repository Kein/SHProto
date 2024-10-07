#pragma once
#include "CoreMinimal.h"
#include "PersistentSaveData.h"
#include "SHPersistentSaveData.generated.h"

UCLASS()
class USHPersistentSaveData : public UPersistentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasEverFinishedGame;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUserSawNewGameInfo;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenLeaveEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenMariaEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenInWaterEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenRebirthEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenTrueLeaveEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenTrueInWaterEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenDogEnding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSeenUfoEnding;
    
    USHPersistentSaveData();

};

