#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELogMessageSeverity.h"
#include "CutscenesLog.generated.h"

UCLASS(BlueprintType)
class CUTSCENES_API UCutscenesLog : public UObject {
    GENERATED_BODY()
public:
    UCutscenesLog();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintStringToMessageLog(const UObject* WorldContextObject, const FString& String, ELogMessageSeverity MessageSeverity);
    
};

