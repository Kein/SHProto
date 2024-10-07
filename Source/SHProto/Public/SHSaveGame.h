#pragma once
#include "CoreMinimal.h"
#include "BaseSaveGame.h"
#include "StreamingDataProvider.h"
#include "SHSaveData.h"
#include "SHSaveGame.generated.h"

UCLASS()
class SHPROTO_API USHSaveGame : public UBaseSaveGame, public IStreamingDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 SaveVersion;
    
    UPROPERTY(Transient)
    FSHSaveData Data;
    
public:
    USHSaveGame();


    // Fix for true pure virtual functions not being implemented
};

