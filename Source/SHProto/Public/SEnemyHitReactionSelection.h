#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHEnemyHitReactionSelectionConfiguration.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitsCountingConfiguration.h"
#include "SHEnemyHitReactionSelectionHitResponsesConfiguration.h"
#include "SEnemyHitReactionSelection.generated.h"

UCLASS()
class SHPROTO_API USEnemyHitReactionSelection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitResponsesConfiguration HitResponsesConfiguration;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionConsecutiveHitsCountingConfiguration HitCountingConfiguration;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionConfiguration HitReactionSelectionConfiguration;
    
    USEnemyHitReactionSelection();

};

