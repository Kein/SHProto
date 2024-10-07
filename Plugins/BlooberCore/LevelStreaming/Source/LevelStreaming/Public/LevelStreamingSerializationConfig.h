#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelStreamingSerializationConfig.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LEVELSTREAMING_API ULevelStreamingSerializationConfig : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestoreActorTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestoreActorVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SerializeComponentsOnlyWithSaveGame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestoreComponentsVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestoreComponentsTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SkipTransformRestoreForDetachedComponents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestoreActorAttachment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> SkipTransformRestoreForComponents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UClass*> SkipTransformRestoreForComponetsClasses;
    
public:
    ULevelStreamingSerializationConfig(const FObjectInitializer& ObjectInitializer);

};

