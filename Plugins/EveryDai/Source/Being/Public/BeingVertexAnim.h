#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "BeingVertexAnim.generated.h"

class UStaticMesh;

UCLASS()
class BEING_API UBeingVertexAnim : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* _Mesh;
    
    UPROPERTY(EditAnywhere)
    float _AnimationSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector _Offset;
    
    UPROPERTY(EditAnywhere)
    FRotator _MinRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator _MaxRotation;
    
    UPROPERTY(EditAnywhere)
    float _MinScale;
    
    UPROPERTY(EditAnywhere)
    float _MaxScale;
    
    UPROPERTY(EditAnywhere)
    int32 _TranslucentSortPriority;
    
    UBeingVertexAnim();

};

