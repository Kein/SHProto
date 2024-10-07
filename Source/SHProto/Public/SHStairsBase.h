#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHStairsBase.generated.h"

class USHStairsDetectionZoneComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHStairsBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StairsGraphicalMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StairsProxyMesh;
    
private:
    UPROPERTY(Instanced, Transient)
    TArray<USHStairsDetectionZoneComponent*> DetectionZoneComponents;
    
public:
    ASHStairsBase(const FObjectInitializer& ObjectInitializer);

};

