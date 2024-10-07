#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FootSocketData.h"
#include "FootData.generated.h"

USTRUCT(BlueprintType)
struct FFootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector _Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector _Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator _Rotation;
    
    UPROPERTY()
    FFootSocketData _FootData;
    
    UPROPERTY()
    FFootSocketData _FingersData;
    
    UPROPERTY(VisibleInstanceOnly)
    float _Step;
    
    UPROPERTY(BlueprintReadOnly)
    bool _FootOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    FVector _Local;
    
    UPROPERTY(BlueprintReadOnly)
    FVector _World;
    
    BEING_API FFootData();
};

