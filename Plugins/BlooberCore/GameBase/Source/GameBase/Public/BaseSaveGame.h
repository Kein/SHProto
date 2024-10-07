#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "GlobalPropertiesSaveData.h"
#include "LevelStreamingActorData.h"
#include "BinaryBlob.h"
#include "BaseSaveGame.generated.h"

UCLASS(BlueprintType)
class GAMEBASE_API UBaseSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint8 bIsHeaderLoaded: 1;
    
    UPROPERTY(Transient)
    uint8 bIsFullyLoaded: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString ProfileName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FDateTime DateTime;
    
    UPROPERTY(Transient)
    FGuid PlaythroughId;
    
    UPROPERTY(Transient)
    int32 BodyDataCrc;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<uint8> Thumbnail;
    
    UPROPERTY(Transient)
    FLevelStreamingActorData GameModeData;
    
    UPROPERTY(Transient)
    FGlobalPropertiesSaveData GlobalPropsData;
    
    UPROPERTY(Transient)
    TMap<FName, FBinaryBlob> Blobs;
    
    UBaseSaveGame();

};

