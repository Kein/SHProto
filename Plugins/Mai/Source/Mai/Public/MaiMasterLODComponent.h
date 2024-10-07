#pragma once
#include "CoreMinimal.h"
#include "MaiTickLODComponent.h"
#include "MaiTickLODConfig.h"
#include "MaiMasterLODComponent.generated.h"

class AController;
class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiMasterLODComponent : public UMaiTickLODComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMaiTickLODConfig _LODConfig[3];
    
private:
    UPROPERTY(Instanced)
    UMaiTickLODComponent* _SlaveComponent;
    
public:
    UMaiMasterLODComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceLOD0(bool Force);
    
};

