#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHItemWeaponExtensionComponent.h"
#include "Templates/SubclassOf.h"
#include "SHItemWeaponChainsawAnimsExtensionComponent.generated.h"

class UAnimMontage;
class USHCharacterPlayAnimActionExe;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHItemWeaponChainsawAnimsExtensionComponent : public USHItemWeaponExtensionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHCharacterPlayAnimActionExe> InDangerIntroAnimActionExeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHCharacterPlayAnimActionExe> InDangerOutroAnimActionExeClass;
    
public:
    USHItemWeaponChainsawAnimsExtensionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessEquipWeaponMontageEndEvent(UAnimMontage* InMontage, ESHAnimEndType AnimEndType);
    
};

