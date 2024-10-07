#pragma once
#include "CoreMinimal.h"
#include "MaiAttackBTDecorators.h"
#include "MaiAttackBTNode.generated.h"

class UBTCompositeNode;
class UMaiAttack;

USTRUCT(BlueprintType)
struct MAI_API FMaiAttackBTNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(VisibleAnywhere)
    UMaiAttack* _FirstAttack;
    
    UPROPERTY(VisibleAnywhere)
    UBTCompositeNode* _ParentNode;
    
    UPROPERTY(VisibleAnywhere)
    int32 _Index;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FMaiAttackBTDecorators> _DerivedDecorators;
    
    FMaiAttackBTNode();
};

