#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "HitEvent.h"
#include "SHCharacterPlayImpactDetectionComponent.generated.h"

class AActor;
class ASHCharacterPlay;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayImpactDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverlapTestMargin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinHitHeightFraction;
    
private:
    UPROPERTY()
    TMap<AActor*, FHitEvent> ImpactCandidates;
    
    UPROPERTY()
    TArray<AActor*> ActiveContacts;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCharacterPlayImpactDetectionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_ImpactDetection_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_ImpactDetection_DrawDebug();
    
    UFUNCTION()
    void CreateHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

