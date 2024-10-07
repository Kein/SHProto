#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHEnemyTransformationStateVariant.h"
#include "SHEnemyTransformationStateVariantSettings.h"
#include "SHEnemyTransformationState.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHEnemyTransformationState : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName StateName;
    
    UPROPERTY(EditAnywhere)
    float TransformationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool TransformToLying;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LyingTransformationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ForceLyingTransfirmationUpdate;
    
    UPROPERTY(EditAnywhere)
    float LyingCapsuleAnchorPosition;
    
    UPROPERTY(EditAnywhere)
    float MaximumLyingCapsuleExtensions;
    
    UPROPERTY(EditAnywhere)
    bool bAvoidCollisionsAfterTransforming;
    
    UPROPERTY(EditAnywhere)
    bool bAvoidCollisionsWhenTransforming;
    
    UPROPERTY(EditAnywhere)
    bool bAlignLyingCapsuleToSurface;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPreventControllerRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRotateActorToDesiredMovement;
    
    UPROPERTY(EditAnywhere)
    float HitReactionsChangeDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyTransformationStateVariantSettings DefaultVariantFW;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyTransformationStateVariant> CustomVariantsFW;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyTransformationStateVariantSettings DefaultVariantOW;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyTransformationStateVariant> CustomVariantsOW;
    
public:
    USHEnemyTransformationState();

};

