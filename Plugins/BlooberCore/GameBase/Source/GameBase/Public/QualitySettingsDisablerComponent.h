#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QualitySettingsDisablerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASE_API UQualitySettingsDisablerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ReverseCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Tagless;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityLow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityMedium;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityHigh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityEpic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnRaytracing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnDesktop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnXBox1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnXBox1X;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnPS4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnPS4Pro;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnPS5;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnScarlet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnLockhart;
    
    UQualitySettingsDisablerComponent(const FObjectInitializer& ObjectInitializer);

};

