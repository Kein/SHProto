#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHAIWeapon.generated.h"

class UMeshComponent;

UCLASS(Abstract)
class SHPROTO_API ASHAIWeapon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName EquipSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform EquipTransform;
    
public:
    ASHAIWeapon(const FObjectInitializer& ObjectInitializer);

};

