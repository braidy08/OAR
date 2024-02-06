#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SteamCoreWebSubsystem.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USteamCoreWebSubsystem();
};

