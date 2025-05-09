/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraErrorNameFromEnum( params->eCameraError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraErrorNameFromEnum( params->eCameraError );
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_HasCamera( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_HasCamera( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraIntrinisics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraIntrinisics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    void *u_pHandle;
    if (params->pHandle) u_pHandle = *params->pHandle;
    params->_ret = iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle ? &u_pHandle : nullptr );
    if (params->pHandle) *params->pHandle = u_pHandle;
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->ReleaseVideoStreamingService( params->hTrackedCamera );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->ReleaseVideoStreamingService( params->hTrackedCamera );
    return 0;
}
#endif

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    params->_ret = iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader, params->nFrameHeaderSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( void *args )
{
    struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params = (struct wow64_IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->u_iface;
    u_CameraVideoStreamFrameHeader_t_100 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
    return 0;
}
#endif

