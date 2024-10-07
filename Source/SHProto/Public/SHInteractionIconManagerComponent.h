#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHInteractionIconManagerComponent.generated.h"

class UCurveFloat;
class USHGameTextsConfig;
class USHInteractionIconWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHInteractionIconManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHInteractionIconWidget> IconWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 IconCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 IconZOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* IconDistanceScaleCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* IconFovScaleCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* IconScaleResolutionCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IconScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IconTemporalDisableOpacityMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    USHGameTextsConfig* GameTextsConfig;
    
    UPROPERTY(Instanced, Transient)
    TArray<USHInteractionIconWidget*> AvailableIcons;
    
    UPROPERTY(Instanced, Transient)
    TArray<USHInteractionIconWidget*> UsedIcons;
    
    UPROPERTY(Instanced, Transient)
    TArray<USHInteractionIconWidget*> AllIcons;
    
public:
    USHInteractionIconManagerComponent(const FObjectInitializer& ObjectInitializer);

};

