#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKAppInfo.generated.h"

USTRUCT(BlueprintType)
struct FChromaSDKAppInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Title;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FString Author_Name;
    
    UPROPERTY(EditAnywhere)
    FString Author_Contact;
    
    UPROPERTY(EditAnywhere)
    uint32 SupportedDevice;
    
    UPROPERTY(EditAnywhere)
    int32 Category;
    
    UCCE_API FChromaSDKAppInfo();
};

