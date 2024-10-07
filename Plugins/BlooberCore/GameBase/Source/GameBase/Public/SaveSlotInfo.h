#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SaveSlotInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GAMEBASE_API FSaveSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileName;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateTime;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* ScreenShot;
    
    UPROPERTY(BlueprintReadOnly)
    FTimespan PlayTime;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IsEmpty: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IsAuto: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IsLastPlayedGame: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IsDisabled: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 IsVisible: 1;
    
    FSaveSlotInfo();
};

