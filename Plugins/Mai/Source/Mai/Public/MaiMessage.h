#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaiReceiverFilter.h"
#include "Templates/SubclassOf.h"
#include "MaiMessage.generated.h"

class AActor;
class APawn;
class UMaiMessage;

UCLASS(Blueprintable, EditInlineNew)
class MAI_API UMaiMessage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* _Sender;
    
    UMaiMessage();

    UFUNCTION(BlueprintCallable)
    void Send(const FMaiReceiverFilter& Filter, float spreadingSpeed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScriptDeliver(APawn* Receiver);
    
    UFUNCTION(BlueprintCallable)
    void MarkReceived();
    
    UFUNCTION(BlueprintCallable)
    void MarkCaptured();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMaiMessage* makeMessage(UObject* WorldContextObject, TSubclassOf<UMaiMessage> msgClass, AActor* sender);
    
    UFUNCTION(BlueprintPure)
    bool IsReceived() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCaptured() const;
    
    UFUNCTION(BlueprintCallable)
    void Deliver(APawn* Receiver);
    
    UFUNCTION(BlueprintCallable)
    void Broadcast(FMaiReceiverFilter Filter, float spreadingSpeed);
    
};

