#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BindingList.h"
#include "InputRebindingSaveData.generated.h"

UCLASS()
class INPUTREBINDING_API UInputRebindingSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBindingList BindingList;
    
    UInputRebindingSaveData();

};

