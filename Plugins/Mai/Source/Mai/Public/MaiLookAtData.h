#pragma once
#include "CoreMinimal.h"
#include "MaiLookAtTarget.h"
#include "MaiLookAtData.generated.h"

USTRUCT(BlueprintType)
struct FMaiLookAtData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FMaiLookAtTarget _LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _OnlyHeadLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _CheckConeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _ConeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _YawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RotationRate;
    
    MAI_API FMaiLookAtData();
};

