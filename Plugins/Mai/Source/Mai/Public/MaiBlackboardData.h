#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MaiBlackboardObject.h"
#include "MaiBlackboardData.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiBlackboardData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, bool> _Bools;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, uint8> _Enums;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, float> _Floats;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, int32> _Ints;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, FName> _Names;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, FMaiBlackboardObject> _Objects;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, FRotator> _Rotators;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, FVector> _Vectors;
    
    FMaiBlackboardData();
};

