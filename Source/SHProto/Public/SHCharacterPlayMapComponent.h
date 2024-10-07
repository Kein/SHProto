#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHMapsEnum.h"
#include "SHMapDynamicObjectDataStruct.h"
#include "SHMapDynamicObjectsContainer.h"
#include "SHMapFogRevealObjectData.h"
#include "SHMapFogRevealObjectsContainer.h"
#include "SHMapObjectDataStruct.h"
#include "SHMapObjectsStruct.h"
#include "SHCharacterPlayMapComponent.generated.h"

class ASHCharacterPlay;
class ASHGameplayMapVolume;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayMapComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESHMapsEnum, int32> MapsPriorities;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TArray<ASHGameplayMapVolume*> MapsVolumes;
    
    UPROPERTY(Transient)
    TArray<FSHMapFogRevealObjectData> FogMapRevealObjectsToApply;
    
    UPROPERTY(SaveGame)
    TMap<ESHMapsEnum, FSHMapObjectsStruct> MapsObjectsData;
    
    UPROPERTY(SaveGame)
    TMap<ESHMapsEnum, FSHMapDynamicObjectsContainer> MapsDynamicObjectsContainers;
    
    UPROPERTY(SaveGame)
    TMap<ESHMapsEnum, FSHMapFogRevealObjectsContainer> FogMapsMapRevealedObjectsContainers;
    
public:
    USHCharacterPlayMapComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    int32 FindObjectDataValue(const FName& ObjectID, ESHMapsEnum Map) const;
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateObjectDataArray(const TArray<FSHMapObjectDataStruct>& MapObjectDataArray);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateObjectData(const FSHMapObjectDataStruct& MapObjectData);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateDynamicObjectData(const FSHMapDynamicObjectDataStruct& MapDynamicObjectData);
    
    UFUNCTION(BlueprintCallable)
    void AddFogRevealObjectToApply(FSHMapFogRevealObjectData MapFogRevealObjectData);
    
};

