/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_GetCalibrationState( void *args )
{
    struct IVRChaperone_IVRChaperone_002_GetCalibrationState_params *params = (struct IVRChaperone_IVRChaperone_002_GetCalibrationState_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetCalibrationState(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_GetCalibrationState( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_GetCalibrationState_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_GetCalibrationState_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetCalibrationState(  );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo( void *args )
{
    struct IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *params = (struct IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetSoftBoundsInfo( params->pInfo );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetSoftBoundsInfo( params->pInfo );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_GetHardBoundsInfo( void *args )
{
    struct IVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *params = (struct IVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetHardBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_GetHardBoundsInfo( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetHardBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo( void *args )
{
    struct IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *params = (struct IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetSeatedBoundsInfo( params->pInfo );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->GetSeatedBoundsInfo( params->pInfo );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_ReloadInfo( void *args )
{
    struct IVRChaperone_IVRChaperone_002_ReloadInfo_params *params = (struct IVRChaperone_IVRChaperone_002_ReloadInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->ReloadInfo(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_ReloadInfo( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_ReloadInfo_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_ReloadInfo_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->ReloadInfo(  );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_SetSceneColor( void *args )
{
    struct IVRChaperone_IVRChaperone_002_SetSceneColor_params *params = (struct IVRChaperone_IVRChaperone_002_SetSceneColor_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->SetSceneColor( params->color );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_SetSceneColor( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_SetSceneColor_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_SetSceneColor_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->SetSceneColor( params->color );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_GetBoundsColor( void *args )
{
    struct IVRChaperone_IVRChaperone_002_GetBoundsColor_params *params = (struct IVRChaperone_IVRChaperone_002_GetBoundsColor_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->GetBoundsColor( params->pOutputColorArray, params->nNumOutputColors );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_GetBoundsColor( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_GetBoundsColor_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_GetBoundsColor_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->GetBoundsColor( params->pOutputColorArray, params->nNumOutputColors );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_AreBoundsVisible( void *args )
{
    struct IVRChaperone_IVRChaperone_002_AreBoundsVisible_params *params = (struct IVRChaperone_IVRChaperone_002_AreBoundsVisible_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->AreBoundsVisible(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_AreBoundsVisible( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_AreBoundsVisible_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_AreBoundsVisible_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    params->_ret = iface->AreBoundsVisible(  );
    return 0;
}
#endif

NTSTATUS IVRChaperone_IVRChaperone_002_ForceBoundsVisible( void *args )
{
    struct IVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *params = (struct IVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->ForceBoundsVisible( params->bForce );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRChaperone_IVRChaperone_002_ForceBoundsVisible( void *args )
{
    struct wow64_IVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *params = (struct wow64_IVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *)args;
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->u_iface;
    iface->ForceBoundsVisible( params->bForce );
    return 0;
}
#endif

