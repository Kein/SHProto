#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCharacterPlayEndingsComponent.generated.h"

class ASHCharacterPlay;
class USHCharacterPlayEndingsComponentSettings;
class USHEndingFactor;
class USHEndingValueProcessor;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayEndingsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHCharacterPlayEndingsComponentSettings* Settings;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TArray<USHEndingFactor*> OwnedFactors;
    
    UPROPERTY(Transient)
    TArray<USHEndingValueProcessor*> OwnedValueProcessors;
    
public:
    USHCharacterPlayEndingsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_ValuesDebug();
    
};

