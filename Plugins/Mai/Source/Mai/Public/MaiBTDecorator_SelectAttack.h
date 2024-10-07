#pragma once
#include "CoreMinimal.h"
#include "MaiBTDecorator_CheckAttack.h"
#include "MaiBTDecorator_SelectAttack.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_SelectAttack : public UMaiBTDecorator_CheckAttack {
    GENERATED_BODY()
public:
    UMaiBTDecorator_SelectAttack();

};

