#pragma once
#include "CoreMinimal.h"
#include "MaiAttackBTDecorators.generated.h"

class UBTCompositeNode;

USTRUCT()
struct MAI_API FMaiAttackBTDecorators {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UBTCompositeNode* _ParentNode;
    
    UPROPERTY(VisibleAnywhere)
    int32 _Index;
    
    FMaiAttackBTDecorators();
};

