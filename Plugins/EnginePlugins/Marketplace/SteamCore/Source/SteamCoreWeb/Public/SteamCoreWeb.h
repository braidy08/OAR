#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SteamCoreWeb.generated.h"

UCLASS(Abstract, Blueprintable)
class STEAMCOREWEB_API USteamCoreWeb : public UObject {
    GENERATED_BODY()
public:
    USteamCoreWeb();
};

