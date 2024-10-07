#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKAppInfoType.generated.h"

USTRUCT(BlueprintType)
struct CHROMASDKPLUGIN_API FChromaSDKAppInfoType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Author_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Author_Contact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SupportedDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Category;
    
    FChromaSDKAppInfoType();
};

