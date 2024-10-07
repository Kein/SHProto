#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMaiLookAt.h"
#include "MaiLookAtTarget.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FMaiLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* _Actor;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* _Component;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector _Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator _Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EMaiLookAt _Type;
    
    MAI_API FMaiLookAtTarget();
};

