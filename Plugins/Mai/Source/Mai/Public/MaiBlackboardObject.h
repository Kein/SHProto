#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiBlackboardObject.generated.h"

USTRUCT()
struct MAI_API FMaiBlackboardObject {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FName _LevelName;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    UClass* _Class;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FGuid _Guid;
    
    FMaiBlackboardObject();
};

