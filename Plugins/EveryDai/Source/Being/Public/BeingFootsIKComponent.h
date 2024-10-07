#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/LineBatchComponent.h"
#include "EFoot.h"
#include "BeingFootsIKComponent.generated.h"

class AActor;
class ACharacter;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingFootsIKComponent : public ULineBatchComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _EnableFootIK: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _ClampInCapsule: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _TraceComplex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _DropCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _FootCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _QueryIgnoreMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> _QueryIgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _IKInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DropInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DropTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FootTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _CacheRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FootRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _FootMinRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _FootMaxRotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _DropHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _DropFloor;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _DropStep;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _DropFloorTarget;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector _LastOwnerLocation;
    
protected:
    UPROPERTY(Transient)
    ACharacter* _Character;
    
public:
    UBeingFootsIKComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void RaiseFoot(EFoot foot);
    
    UFUNCTION(BlueprintCallable)
    void PutFoot(EFoot foot);
    
};

