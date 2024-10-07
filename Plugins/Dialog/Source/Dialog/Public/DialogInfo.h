#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "DialogInfo.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IgnoreRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IgnoreSubtitleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _SingleLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Interactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Unmanaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _Priotrity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _InterruptPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SubtitleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DialogRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiContext _Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDaiContext> _Speakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _OnlyManualSkip;
    
    FDialogInfo();
};

