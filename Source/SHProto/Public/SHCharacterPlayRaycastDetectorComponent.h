#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHRaycastDetectorTraceData.h"
#include "SHCharacterPlayRaycastDetectorComponent.generated.h"

class ASHCharacterPlay;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayRaycastDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHRaycastDetectorTraceData Hover;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHRaycastDetectorTraceData Interact;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCharacterPlayRaycastDetectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInteractBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetHoverBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsInteractBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoverBlocked() const;
    
};

