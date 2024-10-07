#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHItemEquipment.h"
#include "Templates/SubclassOf.h"
#include "SHRadio.generated.h"

class APawn;
class UAkAudioEvent;
class UAkRtpc;
class UNavigationQueryFilter;
class USHAkComponent;

UCLASS()
class SHPROTO_API ASHRadio : public ASHItemEquipment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkComponent* SHAkComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OuterSphereRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InnerSphereRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StandardDistanceScoreInfluence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NavmeshDistanceScoreInfluence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> NavMeshNavigationFilterClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* StartEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* StopEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkRtpc* RTPC_DangerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RTPC_OuterSphereValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RTPC_InnerSphereValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool EnableLightsSupport;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LightsSensitivityMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LightsSensitivityFull;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FColor LightsColorBase;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FColor LightsColorVariance;
    
public:
    ASHRadio(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_Items_Radio_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Items_Radio_DrawDebug();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnemyIgnored(APawn* InEnemyPawn, const bool bInShouldBeIgnored);
    
};

