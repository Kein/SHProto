#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHEndingType.h"
#include "SHCharacterPlayStatisticsComponent.generated.h"

class ASHCharacterPlay;
class USHCharacterPlayStatisticsComponentSettings;
class USHStatisticsValueProcessor;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayStatisticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHCharacterPlayStatisticsComponentSettings* Settings;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TArray<USHStatisticsValueProcessor*> OwnedValueProcessors;
    
    UPROPERTY(SaveGame)
    ESHEndingType RegisteredEnding;
    
public:
    USHCharacterPlayStatisticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartWatchingEverEnabledRadio();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Statistics_ValuesDebug();
    
};

