#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "PerMaterialInfo.h"
#include "SkeletalMeshExComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INSTANCEDMESHEX_API USkeletalMeshExComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FPerMaterialInfo> ShellsCounts;
    
    USkeletalMeshExComponent(const FObjectInitializer& ObjectInitializer);

};

