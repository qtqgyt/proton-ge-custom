/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetSecondsSinceAppActive( void *args )
{
    struct ISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params *params = (struct ISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetSecondsSinceAppActive( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive( void *args )
{
    struct ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params *params = (struct ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetConnectedUniverse( void *args )
{
    struct ISteamUtils_SteamUtils007_GetConnectedUniverse_params *params = (struct ISteamUtils_SteamUtils007_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetConnectedUniverse( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetConnectedUniverse_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetServerRealTime( void *args )
{
    struct ISteamUtils_SteamUtils007_GetServerRealTime_params *params = (struct ISteamUtils_SteamUtils007_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetServerRealTime( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetServerRealTime_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetIPCountry( void *args )
{
    struct ISteamUtils_SteamUtils007_GetIPCountry_params *params = (struct ISteamUtils_SteamUtils007_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetIPCountry(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetIPCountry( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetIPCountry_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetIPCountry(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetImageSize( void *args )
{
    struct ISteamUtils_SteamUtils007_GetImageSize_params *params = (struct ISteamUtils_SteamUtils007_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetImageSize( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetImageSize_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetImageRGBA( void *args )
{
    struct ISteamUtils_SteamUtils007_GetImageRGBA_params *params = (struct ISteamUtils_SteamUtils007_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetImageRGBA( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetImageRGBA_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetCSERIPPort( void *args )
{
    struct ISteamUtils_SteamUtils007_GetCSERIPPort_params *params = (struct ISteamUtils_SteamUtils007_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetCSERIPPort( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetCSERIPPort_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetCurrentBatteryPower( void *args )
{
    struct ISteamUtils_SteamUtils007_GetCurrentBatteryPower_params *params = (struct ISteamUtils_SteamUtils007_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetCurrentBatteryPower( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetCurrentBatteryPower_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetAppID( void *args )
{
    struct ISteamUtils_SteamUtils007_GetAppID_params *params = (struct ISteamUtils_SteamUtils007_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetAppID(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetAppID( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetAppID_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetAppID(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_SetOverlayNotificationPosition( void *args )
{
    struct ISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params *params = (struct ISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_SetOverlayNotificationPosition( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params *params = (struct wow64_ISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_IsAPICallCompleted( void *args )
{
    struct ISteamUtils_SteamUtils007_IsAPICallCompleted_params *params = (struct ISteamUtils_SteamUtils007_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_IsAPICallCompleted( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_IsAPICallCompleted_params *params = (struct wow64_ISteamUtils_SteamUtils007_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetAPICallFailureReason( void *args )
{
    struct ISteamUtils_SteamUtils007_GetAPICallFailureReason_params *params = (struct ISteamUtils_SteamUtils007_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetAPICallFailureReason( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetAPICallFailureReason_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_RunFrame( void *args )
{
    struct ISteamUtils_SteamUtils007_RunFrame_params *params = (struct ISteamUtils_SteamUtils007_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    iface->RunFrame(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_RunFrame( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_RunFrame_params *params = (struct wow64_ISteamUtils_SteamUtils007_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    iface->RunFrame(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetIPCCallCount( void *args )
{
    struct ISteamUtils_SteamUtils007_GetIPCCallCount_params *params = (struct ISteamUtils_SteamUtils007_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetIPCCallCount( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetIPCCallCount_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_SetWarningMessageHook( void *args )
{
    struct ISteamUtils_SteamUtils007_SetWarningMessageHook_params *params = (struct ISteamUtils_SteamUtils007_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_SetWarningMessageHook( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_SetWarningMessageHook_params *params = (struct wow64_ISteamUtils_SteamUtils007_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_IsOverlayEnabled( void *args )
{
    struct ISteamUtils_SteamUtils007_IsOverlayEnabled_params *params = (struct ISteamUtils_SteamUtils007_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_IsOverlayEnabled( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_IsOverlayEnabled_params *params = (struct wow64_ISteamUtils_SteamUtils007_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_BOverlayNeedsPresent( void *args )
{
    struct ISteamUtils_SteamUtils007_BOverlayNeedsPresent_params *params = (struct ISteamUtils_SteamUtils007_BOverlayNeedsPresent_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->BOverlayNeedsPresent(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_BOverlayNeedsPresent( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_BOverlayNeedsPresent_params *params = (struct wow64_ISteamUtils_SteamUtils007_BOverlayNeedsPresent_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->BOverlayNeedsPresent(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_CheckFileSignature( void *args )
{
    struct ISteamUtils_SteamUtils007_CheckFileSignature_params *params = (struct ISteamUtils_SteamUtils007_CheckFileSignature_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    char *u_szFileName = steamclient_dos_to_unix_path( params->szFileName, 0 );
    params->_ret = iface->CheckFileSignature( u_szFileName );
    steamclient_free_path( u_szFileName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_CheckFileSignature( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_CheckFileSignature_params *params = (struct wow64_ISteamUtils_SteamUtils007_CheckFileSignature_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    char *u_szFileName = steamclient_dos_to_unix_path( params->szFileName, 0 );
    params->_ret = iface->CheckFileSignature( u_szFileName );
    steamclient_free_path( u_szFileName );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_ShowGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils007_ShowGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils007_ShowGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_ShowGamepadTextInput( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_ShowGamepadTextInput_params *params = (struct wow64_ISteamUtils_SteamUtils007_ShowGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength( void *args )
{
    struct ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params *params = (struct ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_GetSteamUILanguage( void *args )
{
    struct ISteamUtils_SteamUtils007_GetSteamUILanguage_params *params = (struct ISteamUtils_SteamUtils007_GetSteamUILanguage_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetSteamUILanguage(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_GetSteamUILanguage( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_GetSteamUILanguage_params *params = (struct wow64_ISteamUtils_SteamUtils007_GetSteamUILanguage_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->GetSteamUILanguage(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_IsSteamRunningInVR( void *args )
{
    struct ISteamUtils_SteamUtils007_IsSteamRunningInVR_params *params = (struct ISteamUtils_SteamUtils007_IsSteamRunningInVR_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->IsSteamRunningInVR(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_IsSteamRunningInVR( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_IsSteamRunningInVR_params *params = (struct wow64_ISteamUtils_SteamUtils007_IsSteamRunningInVR_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    params->_ret = iface->IsSteamRunningInVR(  );
    return 0;
}
#endif

NTSTATUS ISteamUtils_SteamUtils007_SetOverlayNotificationInset( void *args )
{
    struct ISteamUtils_SteamUtils007_SetOverlayNotificationInset_params *params = (struct ISteamUtils_SteamUtils007_SetOverlayNotificationInset_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamUtils_SteamUtils007_SetOverlayNotificationInset( void *args )
{
    struct wow64_ISteamUtils_SteamUtils007_SetOverlayNotificationInset_params *params = (struct wow64_ISteamUtils_SteamUtils007_SetOverlayNotificationInset_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->u_iface;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
    return 0;
}
#endif

