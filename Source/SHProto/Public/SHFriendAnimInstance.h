#pragma once
#include "CoreMinimal.h"
#include "SHNPCAnimInstance.h"
#include "SHFriendAnimInstance.generated.h"

class USHFriendAnimInstanceStateData;
class USHFriendLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHFriendAnimInstance : public USHNPCAnimInstance {
    GENERATED_BODY()
public:
    USHFriendAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHFriendLocomotionAnimInstance* GetFriendLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHFriendAnimInstanceStateData* GetFriendAnimInstanceStateData() const;
    
};

