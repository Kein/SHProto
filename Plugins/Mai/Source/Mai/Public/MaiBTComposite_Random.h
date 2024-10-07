#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "MaiBTComposite_Random.generated.h"

UCLASS()
class MAI_API UMaiBTComposite_Random : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 _FillTo;
    
    UMaiBTComposite_Random();

};

