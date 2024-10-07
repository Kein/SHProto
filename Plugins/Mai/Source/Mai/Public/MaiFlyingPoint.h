#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MaiFlyingConnection.h"
#include "MaiFlyingPoint.generated.h"

class AMaiController;
class AMaiFlyingGraph;
class UMaiFlyingPointComponent;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS()
class MAI_API AMaiFlyingPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiFlyingPointComponent* _Transformer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* _MarkerMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UTextRenderComponent* _Text;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLinearColor _Color;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 _ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AMaiFlyingGraph* _Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Radius;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FMaiFlyingConnection> _Connections;
    
    AMaiFlyingPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsReachableFrom(const FVector& Location, AMaiController* User) const;
    
};

