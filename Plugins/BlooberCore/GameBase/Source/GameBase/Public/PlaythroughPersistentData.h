#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PlaythroughPersistentData.generated.h"

UCLASS(Abstract)
class GAMEBASE_API UPlaythroughPersistentData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGuid PlaythroughId;
    
    UPROPERTY()
    FDateTime DateTime;
    
public:
    UPlaythroughPersistentData();

};

