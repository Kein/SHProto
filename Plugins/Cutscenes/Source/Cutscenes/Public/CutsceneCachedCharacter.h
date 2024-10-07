#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CutsceneCachedCharacterInterface.h"
#include "CutsceneCachedCharacter.generated.h"

class USceneComponent;
class USkeletalMeshExComponent;

UCLASS()
class CUTSCENES_API ACutsceneCachedCharacter : public AActor, public ICutsceneCachedCharacterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshExComponent* Mesh;
    
    ACutsceneCachedCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

