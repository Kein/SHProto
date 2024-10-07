#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "EInputHandleType.h"
#include "UE4InputHandle.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FUE4InputHandle : public FNamedHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EInputHandleType Type;
    
public:
    FUE4InputHandle();
};
FORCEINLINE uint32 GetTypeHash(const FUE4InputHandle) { return 0; }

