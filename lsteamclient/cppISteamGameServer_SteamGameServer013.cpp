/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_InitGameServer( void *args )
{
    struct ISteamGameServer_SteamGameServer013_InitGameServer_params *params = (struct ISteamGameServer_SteamGameServer013_InitGameServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_InitGameServer( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_InitGameServer_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_InitGameServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetProduct( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetProduct_params *params = (struct ISteamGameServer_SteamGameServer013_SetProduct_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetProduct( params->pszProduct );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetProduct( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetProduct_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetProduct_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetProduct( params->pszProduct );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetGameDescription( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetGameDescription_params *params = (struct ISteamGameServer_SteamGameServer013_SetGameDescription_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetGameDescription( params->pszGameDescription );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetGameDescription( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetGameDescription_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetGameDescription_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetGameDescription( params->pszGameDescription );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetModDir( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetModDir_params *params = (struct ISteamGameServer_SteamGameServer013_SetModDir_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetModDir( params->pszModDir );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetModDir( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetModDir_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetModDir_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetModDir( params->pszModDir );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetDedicatedServer( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetDedicatedServer_params *params = (struct ISteamGameServer_SteamGameServer013_SetDedicatedServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetDedicatedServer( params->bDedicated );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetDedicatedServer( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetDedicatedServer_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetDedicatedServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetDedicatedServer( params->bDedicated );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer013_LogOn_params *params = (struct ISteamGameServer_SteamGameServer013_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->LogOn( params->pszToken );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_LogOn( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_LogOn_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->LogOn( params->pszToken );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_LogOnAnonymous( void *args )
{
    struct ISteamGameServer_SteamGameServer013_LogOnAnonymous_params *params = (struct ISteamGameServer_SteamGameServer013_LogOnAnonymous_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->LogOnAnonymous(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_LogOnAnonymous( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_LogOnAnonymous_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_LogOnAnonymous_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->LogOnAnonymous(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer013_LogOff_params *params = (struct ISteamGameServer_SteamGameServer013_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->LogOff(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_LogOff( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_LogOff_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->LogOff(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer013_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer013_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_BLoggedOn( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_BLoggedOn_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer013_BSecure_params *params = (struct ISteamGameServer_SteamGameServer013_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BSecure(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_BSecure( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_BSecure_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BSecure(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer013_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer013_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_GetSteamID( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_GetSteamID_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_WasRestartRequested( void *args )
{
    struct ISteamGameServer_SteamGameServer013_WasRestartRequested_params *params = (struct ISteamGameServer_SteamGameServer013_WasRestartRequested_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->WasRestartRequested(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_WasRestartRequested( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_WasRestartRequested_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_WasRestartRequested_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->WasRestartRequested(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetMaxPlayerCount( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params *params = (struct ISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetMaxPlayerCount( params->cPlayersMax );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetMaxPlayerCount( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetMaxPlayerCount( params->cPlayersMax );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetBotPlayerCount( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetBotPlayerCount_params *params = (struct ISteamGameServer_SteamGameServer013_SetBotPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetBotPlayerCount( params->cBotplayers );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetBotPlayerCount( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetBotPlayerCount_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetBotPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetBotPlayerCount( params->cBotplayers );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetServerName( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetServerName_params *params = (struct ISteamGameServer_SteamGameServer013_SetServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetServerName( params->pszServerName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetServerName( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetServerName_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetServerName( params->pszServerName );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetMapName( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetMapName_params *params = (struct ISteamGameServer_SteamGameServer013_SetMapName_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetMapName( params->pszMapName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetMapName( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetMapName_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetMapName_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetMapName( params->pszMapName );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetPasswordProtected( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetPasswordProtected_params *params = (struct ISteamGameServer_SteamGameServer013_SetPasswordProtected_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetPasswordProtected( params->bPasswordProtected );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetPasswordProtected( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetPasswordProtected_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetPasswordProtected_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetPasswordProtected( params->bPasswordProtected );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer013_SetSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetSpectatorPort( params->unSpectatorPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetSpectatorPort( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetSpectatorPort_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetSpectatorPort( params->unSpectatorPort );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetSpectatorServerName( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetSpectatorServerName_params *params = (struct ISteamGameServer_SteamGameServer013_SetSpectatorServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetSpectatorServerName( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetSpectatorServerName_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetSpectatorServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_ClearAllKeyValues( void *args )
{
    struct ISteamGameServer_SteamGameServer013_ClearAllKeyValues_params *params = (struct ISteamGameServer_SteamGameServer013_ClearAllKeyValues_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->ClearAllKeyValues(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_ClearAllKeyValues( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_ClearAllKeyValues_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_ClearAllKeyValues_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->ClearAllKeyValues(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetKeyValue( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetKeyValue_params *params = (struct ISteamGameServer_SteamGameServer013_SetKeyValue_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetKeyValue( params->pKey, params->pValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetKeyValue( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetKeyValue_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetKeyValue_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetKeyValue( params->pKey, params->pValue );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetGameTags( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetGameTags_params *params = (struct ISteamGameServer_SteamGameServer013_SetGameTags_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetGameTags( params->pchGameTags );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetGameTags( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetGameTags_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetGameTags_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetGameTags( params->pchGameTags );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetGameData( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetGameData_params *params = (struct ISteamGameServer_SteamGameServer013_SetGameData_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetGameData( params->pchGameData );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetGameData( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetGameData_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetGameData_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetGameData( params->pchGameData );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetRegion( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetRegion_params *params = (struct ISteamGameServer_SteamGameServer013_SetRegion_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetRegion( params->pszRegion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetRegion( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetRegion_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetRegion_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetRegion( params->pszRegion );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params *params = (struct ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection( void *args )
{
    struct ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params *params = (struct ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SendUserDisconnect( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SendUserDisconnect_params *params = (struct ISteamGameServer_SteamGameServer013_SendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SendUserDisconnect( params->steamIDUser );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SendUserDisconnect( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SendUserDisconnect_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SendUserDisconnect( params->steamIDUser );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_BUpdateUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer013_BUpdateUserData_params *params = (struct ISteamGameServer_SteamGameServer013_BUpdateUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_BUpdateUserData( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_BUpdateUserData_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_BUpdateUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_GetAuthSessionTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params *params = (struct ISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_GetAuthSessionTicket( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_BeginAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer013_BeginAuthSession_params *params = (struct ISteamGameServer_SteamGameServer013_BeginAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_BeginAuthSession( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_BeginAuthSession_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_BeginAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_EndAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer013_EndAuthSession_params *params = (struct ISteamGameServer_SteamGameServer013_EndAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->EndAuthSession( params->steamID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_EndAuthSession( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_EndAuthSession_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_EndAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->EndAuthSession( params->steamID );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_CancelAuthTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer013_CancelAuthTicket_params *params = (struct ISteamGameServer_SteamGameServer013_CancelAuthTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_CancelAuthTicket( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_CancelAuthTicket_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_CancelAuthTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_UserHasLicenseForApp( void *args )
{
    struct ISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params *params = (struct ISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_UserHasLicenseForApp( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_RequestUserGroupStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params *params = (struct ISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_RequestUserGroupStatus( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_GetGameplayStats( void *args )
{
    struct ISteamGameServer_SteamGameServer013_GetGameplayStats_params *params = (struct ISteamGameServer_SteamGameServer013_GetGameplayStats_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->GetGameplayStats(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_GetGameplayStats( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_GetGameplayStats_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_GetGameplayStats_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->GetGameplayStats(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_GetServerReputation( void *args )
{
    struct ISteamGameServer_SteamGameServer013_GetServerReputation_params *params = (struct ISteamGameServer_SteamGameServer013_GetServerReputation_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->GetServerReputation(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_GetServerReputation( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_GetServerReputation_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_GetServerReputation_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->GetServerReputation(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_GetPublicIP( void *args )
{
    struct ISteamGameServer_SteamGameServer013_GetPublicIP_params *params = (struct ISteamGameServer_SteamGameServer013_GetPublicIP_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    *params->_ret = iface->GetPublicIP(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_GetPublicIP( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_GetPublicIP_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_GetPublicIP_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    *params->_ret = iface->GetPublicIP(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_HandleIncomingPacket( void *args )
{
    struct ISteamGameServer_SteamGameServer013_HandleIncomingPacket_params *params = (struct ISteamGameServer_SteamGameServer013_HandleIncomingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_HandleIncomingPacket( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_HandleIncomingPacket_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_HandleIncomingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket( void *args )
{
    struct ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params *params = (struct ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_EnableHeartbeats( void *args )
{
    struct ISteamGameServer_SteamGameServer013_EnableHeartbeats_params *params = (struct ISteamGameServer_SteamGameServer013_EnableHeartbeats_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->EnableHeartbeats( params->bActive );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_EnableHeartbeats( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_EnableHeartbeats_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_EnableHeartbeats_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->EnableHeartbeats( params->bActive );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_SetHeartbeatInterval( void *args )
{
    struct ISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params *params = (struct ISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_SetHeartbeatInterval( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_ForceHeartbeat( void *args )
{
    struct ISteamGameServer_SteamGameServer013_ForceHeartbeat_params *params = (struct ISteamGameServer_SteamGameServer013_ForceHeartbeat_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->ForceHeartbeat(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_ForceHeartbeat( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_ForceHeartbeat_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_ForceHeartbeat_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    iface->ForceHeartbeat(  );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_AssociateWithClan( void *args )
{
    struct ISteamGameServer_SteamGameServer013_AssociateWithClan_params *params = (struct ISteamGameServer_SteamGameServer013_AssociateWithClan_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_AssociateWithClan( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_AssociateWithClan_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_AssociateWithClan_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
    return 0;
}
#endif

NTSTATUS ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility( void *args )
{
    struct ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params *params = (struct ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility( void *args )
{
    struct wow64_ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params *params = (struct wow64_ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params *)args;
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->u_iface;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
    return 0;
}
#endif

