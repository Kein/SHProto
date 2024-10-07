#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCharacterPlayTraversalComponent.generated.h"

class USHTraversalBaseComponent;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayTraversalComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USHTraversalBaseComponent* CurrentlyPlayingTraversal;
    
    UPROPERTY(Instanced, Transient)
    TArray<USHTraversalBaseComponent*> ManagedTraversalComponents;
    
public:
    USHCharacterPlayTraversalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Traversal_ObstacleDrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Traversal_ClimbPrintDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Traversal_ClimbDrawDebug();
    
protected:
    UFUNCTION()
    void ProcessTraversalStartedEvent(USHTraversalBaseComponent* InTraversalComp);
    
    UFUNCTION()
    void ProcessTraversalEndedEvent(USHTraversalBaseComponent* InTraversalComp);
    
};

