#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "Templates/SubclassOf.h"
#include "NavArea_NotSupported.generated.h"

UCLASS(Abstract)
class UNavArea_NotSupported : public UNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> SupportedArea;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> NotSupportedArea;
    
    UNavArea_NotSupported();

};

