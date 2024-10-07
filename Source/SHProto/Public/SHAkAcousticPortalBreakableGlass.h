#pragma once
#include "CoreMinimal.h"
#include "SHAkAcousticPortal.h"
#include "SHAkAcousticPortalBreakableGlass.generated.h"

class AActor;
class USHActorLevelObserverComponent;
class USHBreakableGlassComponent;

UCLASS()
class SHPROTO_API ASHAkAcousticPortalBreakableGlass : public ASHAkAcousticPortal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHActorLevelObserverComponent* ActorLevelObserverComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TSoftObjectPtr<AActor> BreakableGlassActor;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bUseMultipleGlassSupport;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<TSoftObjectPtr<AActor>> MultipleBreakableGlassActors;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bFullOpenOnBreak;
    
    ASHAkAcousticPortalBreakableGlass(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessOnObservedActorAvailable(AActor* AvailableActor);
    
    UFUNCTION()
    void ProcessBreakableGlassOnBreakEvent(USHBreakableGlassComponent* BreakableGlassComponent);
    
};

