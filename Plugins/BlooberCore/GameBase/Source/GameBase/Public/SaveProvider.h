#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SaveProvider.generated.h"

class UBGameInstance;
class USaveGame;

UCLASS()
class GAMEBASE_API USaveProvider : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UBGameInstance* GameInstance;
    
    UPROPERTY(Transient)
    USaveGame* CurrentGameData;
    
public:
    USaveProvider();

};

