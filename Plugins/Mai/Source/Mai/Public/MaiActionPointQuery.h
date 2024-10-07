#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiActionPointQuery.generated.h"

class AMaiController;

USTRUCT(BlueprintType)
struct MAI_API FMaiActionPointQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AMaiController* _User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FromGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FromObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _CheckWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _SequenceOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Safe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _Location;
    
    FMaiActionPointQuery();
};

