#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamingRuntimeActorData.h"
#include "MaiSpawnerManager.h"
#include "SaiSpawnerManager.generated.h"

class USaiActorSerializer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SAI_API USaiSpawnerManager : public UMaiSpawnerManager {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGuid, FLevelStreamingRuntimeActorData> _AllSpawnedActorsData;
    
    UPROPERTY(EditAnywhere, Instanced)
    USaiActorSerializer* _ActorSerializer;
    
    USaiSpawnerManager(const FObjectInitializer& ObjectInitializer);

};

