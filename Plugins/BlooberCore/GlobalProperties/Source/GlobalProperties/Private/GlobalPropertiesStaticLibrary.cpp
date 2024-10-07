#include "GlobalPropertiesStaticLibrary.h"

UGlobalPropertiesStaticLibrary::UGlobalPropertiesStaticLibrary() {
}

bool UGlobalPropertiesStaticLibrary::ToggleGlobalBool(UObject* WorldContextObject, FGlobalPropertyHandleBool Handle) {
    return false;
}

int32 UGlobalPropertiesStaticLibrary::SubtractFromGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value) {
    return 0;
}

float UGlobalPropertiesStaticLibrary::SubtractFromGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value) {
    return 0.0f;
}

void UGlobalPropertiesStaticLibrary::SetGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 NewValue) {
}

void UGlobalPropertiesStaticLibrary::SetGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float NewValue) {
}

void UGlobalPropertiesStaticLibrary::SetGlobalBool(UObject* WorldContextObject, FGlobalPropertyHandleBool Handle, const bool NewValue) {
}

void UGlobalPropertiesStaticLibrary::ResetGlobalProperties(UObject* WorldContextObject, const UGlobalPropertiesSheet* Sheet) {
}

int32 UGlobalPropertiesStaticLibrary::MultiplyGlobalIntBy(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value) {
    return 0;
}

float UGlobalPropertiesStaticLibrary::MultiplyGlobalFloatBy(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value) {
    return 0.0f;
}

int32 UGlobalPropertiesStaticLibrary::GetGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle) {
    return 0;
}

float UGlobalPropertiesStaticLibrary::GetGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle) {
    return 0.0f;
}

bool UGlobalPropertiesStaticLibrary::GetGlobalBool(UObject* WorldContextObject, FGlobalPropertyHandleBool Handle) {
    return false;
}

int32 UGlobalPropertiesStaticLibrary::DivideGlobalIntBy(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value) {
    return 0;
}

float UGlobalPropertiesStaticLibrary::DivideGlobalFloatBy(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value) {
    return 0.0f;
}

int32 UGlobalPropertiesStaticLibrary::AddToGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value) {
    return 0;
}

float UGlobalPropertiesStaticLibrary::AddToGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value) {
    return 0.0f;
}


