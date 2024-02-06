#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnSteamCoreWebAppListAsyncCallbackDelegate.h"
#include "WebAppsGetAppList.h"
#include "SteamCoreAppsAsyncActionGetAppList.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetAppList;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppList : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamCoreWebAppListAsyncCallback OnCallback;
    
    USteamCoreAppsAsyncActionGetAppList();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const TArray<FWebAppsGetAppList>& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(UObject* WorldContextObject);
    
};

