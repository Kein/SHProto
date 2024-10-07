#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_HideWeaponMesh.generated.h"

class ASHItemWeapon;

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API UAnimNotify_HideWeaponMesh : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool EnsureIsHiddenPerTick;
    
private:
    UPROPERTY(Transient)
    TArray<ASHItemWeapon*> ProcessedWeapons;
    
public:
    UAnimNotify_HideWeaponMesh();

};

