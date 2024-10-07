#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESimulatedWaterEffectType.h"
#include "SHXWaterIntersection.h"
#include "SHWaterInteractionComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHWaterInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsWaterInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TrackOwnerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OwnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESimulatedWaterEffectType OwnerEffectType;
    
    USHWaterInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterInteractionBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsWaterInteractionBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsWaterInteractionBlocked() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSHXWaterIntersection> GetCurrentIntersections() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWaterInteraction(const FSHXWaterIntersection& InWaterIntersection);
    
    UFUNCTION(BlueprintCallable)
    static void AddSimpleWaterInteraction(const UObject* Requester, const FSHXWaterIntersection& InWaterIntersection);
    
};

