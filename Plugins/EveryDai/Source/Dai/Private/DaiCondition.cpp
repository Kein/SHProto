#include "DaiCondition.h"

UDaiCondition::UDaiCondition() {
    this->_InversedCondition = false;
}

void UDaiCondition::RemoveConditionsListener(FDaiConditions& Conditions, TScriptInterface<IDaiConditionsListenerInterface> Listener) {
}

bool UDaiCondition::performConditions(const FDaiConditions& Conditions, UObject* Context, AActor* caller, bool Debug) {
    return false;
}

FString UDaiCondition::getOperationSymbol(ENumberCompareOperation Operation) {
    return TEXT("");
}

bool UDaiCondition::compareInt(ENumberCompareOperation Operation, int32 A, int32 B) {
    return false;
}

bool UDaiCondition::compareFloat(ENumberCompareOperation Operation, float A, float B) {
    return false;
}

void UDaiCondition::AddConditionsListener(FDaiConditions& Conditions, TScriptInterface<IDaiConditionsListenerInterface> Listener) {
}


