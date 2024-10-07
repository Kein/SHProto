#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BeingLocationTracker.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingLocationTracker : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _LocationCountLimit;
    
    UPROPERTY(EditAnywhere)
    float _LocationDistance;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FVector> _Locations;
    
public:
    UBeingLocationTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    TArray<FVector> GetLocationHistory() const;
    
};

