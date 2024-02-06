#include "SteamCoreWebSettings.h"

USteamCoreWebSettings::USteamCoreWebSettings() {
    this->AsyncTaskTimeout = 15.00f;
    this->DisabledSubsystems = 0;
    this->bDebugging = false;
    this->bDevMode = false;
    this->Key = TEXT("5DEF806D9ECCF29B35A05BA50664EF84");
    this->AppID = 2551020;
    this->bSandboxMode = false;
}

