#pragma once
#include "CoreMinimal.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "SHGeometryCollectionActor.generated.h"

UCLASS()
class SHPROTO_API ASHGeometryCollectionActor : public AGeometryCollectionActor {
    GENERATED_BODY()
public:
    ASHGeometryCollectionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetNumElements();
    
};

