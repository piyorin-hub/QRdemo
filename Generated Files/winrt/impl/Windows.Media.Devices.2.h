// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220912.1

#pragma once
#ifndef WINRT_Windows_Media_Devices_2_H
#define WINRT_Windows_Media_Devices_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Devices
{
    struct __declspec(empty_bases) AdvancedPhotoCaptureSettings : winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings
    {
        AdvancedPhotoCaptureSettings(std::nullptr_t) noexcept {}
        AdvancedPhotoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings(ptr, take_ownership_from_abi) {}
        AdvancedPhotoCaptureSettings();
    };
    struct __declspec(empty_bases) AdvancedPhotoControl : winrt::Windows::Media::Devices::IAdvancedPhotoControl
    {
        AdvancedPhotoControl(std::nullptr_t) noexcept {}
        AdvancedPhotoControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IAdvancedPhotoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceController : winrt::Windows::Media::Devices::IAudioDeviceController
    {
        AudioDeviceController(std::nullptr_t) noexcept {}
        AudioDeviceController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IAudioDeviceController(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceModule : winrt::Windows::Media::Devices::IAudioDeviceModule
    {
        AudioDeviceModule(std::nullptr_t) noexcept {}
        AudioDeviceModule(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IAudioDeviceModule(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceModuleNotificationEventArgs : winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs
    {
        AudioDeviceModuleNotificationEventArgs(std::nullptr_t) noexcept {}
        AudioDeviceModuleNotificationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioDeviceModulesManager : winrt::Windows::Media::Devices::IAudioDeviceModulesManager
    {
        AudioDeviceModulesManager(std::nullptr_t) noexcept {}
        AudioDeviceModulesManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IAudioDeviceModulesManager(ptr, take_ownership_from_abi) {}
        explicit AudioDeviceModulesManager(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) DefaultAudioCaptureDeviceChangedEventArgs : winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs
    {
        DefaultAudioCaptureDeviceChangedEventArgs(std::nullptr_t) noexcept {}
        DefaultAudioCaptureDeviceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DefaultAudioRenderDeviceChangedEventArgs : winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs
    {
        DefaultAudioRenderDeviceChangedEventArgs(std::nullptr_t) noexcept {}
        DefaultAudioRenderDeviceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExposureCompensationControl : winrt::Windows::Media::Devices::IExposureCompensationControl
    {
        ExposureCompensationControl(std::nullptr_t) noexcept {}
        ExposureCompensationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IExposureCompensationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExposureControl : winrt::Windows::Media::Devices::IExposureControl
    {
        ExposureControl(std::nullptr_t) noexcept {}
        ExposureControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IExposureControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ExposurePriorityVideoControl : winrt::Windows::Media::Devices::IExposurePriorityVideoControl
    {
        ExposurePriorityVideoControl(std::nullptr_t) noexcept {}
        ExposurePriorityVideoControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IExposurePriorityVideoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FlashControl : winrt::Windows::Media::Devices::IFlashControl,
        impl::require<FlashControl, winrt::Windows::Media::Devices::IFlashControl2>
    {
        FlashControl(std::nullptr_t) noexcept {}
        FlashControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IFlashControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusControl : winrt::Windows::Media::Devices::IFocusControl,
        impl::require<FocusControl, winrt::Windows::Media::Devices::IFocusControl2>
    {
        FocusControl(std::nullptr_t) noexcept {}
        FocusControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IFocusControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusSettings : winrt::Windows::Media::Devices::IFocusSettings
    {
        FocusSettings(std::nullptr_t) noexcept {}
        FocusSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IFocusSettings(ptr, take_ownership_from_abi) {}
        FocusSettings();
    };
    struct __declspec(empty_bases) HdrVideoControl : winrt::Windows::Media::Devices::IHdrVideoControl
    {
        HdrVideoControl(std::nullptr_t) noexcept {}
        HdrVideoControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IHdrVideoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InfraredTorchControl : winrt::Windows::Media::Devices::IInfraredTorchControl
    {
        InfraredTorchControl(std::nullptr_t) noexcept {}
        InfraredTorchControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IInfraredTorchControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IsoSpeedControl : winrt::Windows::Media::Devices::IIsoSpeedControl,
        impl::require<IsoSpeedControl, winrt::Windows::Media::Devices::IIsoSpeedControl2>
    {
        IsoSpeedControl(std::nullptr_t) noexcept {}
        IsoSpeedControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IIsoSpeedControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoControl : winrt::Windows::Media::Devices::ILowLagPhotoControl
    {
        LowLagPhotoControl(std::nullptr_t) noexcept {}
        LowLagPhotoControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::ILowLagPhotoControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoSequenceControl : winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl
    {
        LowLagPhotoSequenceControl(std::nullptr_t) noexcept {}
        LowLagPhotoSequenceControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl(ptr, take_ownership_from_abi) {}
    };
    struct MediaDevice
    {
        MediaDevice() = delete;
        static auto GetAudioCaptureSelector();
        static auto GetAudioRenderSelector();
        static auto GetVideoCaptureSelector();
        static auto GetDefaultAudioCaptureId(winrt::Windows::Media::Devices::AudioDeviceRole const& role);
        static auto GetDefaultAudioRenderId(winrt::Windows::Media::Devices::AudioDeviceRole const& role);
        static auto DefaultAudioCaptureDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler);
        using DefaultAudioCaptureDeviceChanged_revoker = impl::factory_event_revoker<winrt::Windows::Media::Devices::IMediaDeviceStatics, &impl::abi_t<winrt::Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioCaptureDeviceChanged>;
        [[nodiscard]] static auto DefaultAudioCaptureDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler);
        static auto DefaultAudioCaptureDeviceChanged(winrt::event_token const& cookie);
        static auto DefaultAudioRenderDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler);
        using DefaultAudioRenderDeviceChanged_revoker = impl::factory_event_revoker<winrt::Windows::Media::Devices::IMediaDeviceStatics, &impl::abi_t<winrt::Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioRenderDeviceChanged>;
        [[nodiscard]] static auto DefaultAudioRenderDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler);
        static auto DefaultAudioRenderDeviceChanged(winrt::event_token const& cookie);
    };
    struct __declspec(empty_bases) MediaDeviceControl : winrt::Windows::Media::Devices::IMediaDeviceControl
    {
        MediaDeviceControl(std::nullptr_t) noexcept {}
        MediaDeviceControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IMediaDeviceControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaDeviceControlCapabilities : winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities
    {
        MediaDeviceControlCapabilities(std::nullptr_t) noexcept {}
        MediaDeviceControlCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ModuleCommandResult : winrt::Windows::Media::Devices::IModuleCommandResult
    {
        ModuleCommandResult(std::nullptr_t) noexcept {}
        ModuleCommandResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IModuleCommandResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OpticalImageStabilizationControl : winrt::Windows::Media::Devices::IOpticalImageStabilizationControl
    {
        OpticalImageStabilizationControl(std::nullptr_t) noexcept {}
        OpticalImageStabilizationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IOpticalImageStabilizationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PanelBasedOptimizationControl : winrt::Windows::Media::Devices::IPanelBasedOptimizationControl
    {
        PanelBasedOptimizationControl(std::nullptr_t) noexcept {}
        PanelBasedOptimizationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IPanelBasedOptimizationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoConfirmationControl : winrt::Windows::Media::Devices::IPhotoConfirmationControl
    {
        PhotoConfirmationControl(std::nullptr_t) noexcept {}
        PhotoConfirmationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IPhotoConfirmationControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RegionOfInterest : winrt::Windows::Media::Devices::IRegionOfInterest,
        impl::require<RegionOfInterest, winrt::Windows::Media::Devices::IRegionOfInterest2>
    {
        RegionOfInterest(std::nullptr_t) noexcept {}
        RegionOfInterest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IRegionOfInterest(ptr, take_ownership_from_abi) {}
        RegionOfInterest();
    };
    struct __declspec(empty_bases) RegionsOfInterestControl : winrt::Windows::Media::Devices::IRegionsOfInterestControl
    {
        RegionsOfInterestControl(std::nullptr_t) noexcept {}
        RegionsOfInterestControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IRegionsOfInterestControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SceneModeControl : winrt::Windows::Media::Devices::ISceneModeControl
    {
        SceneModeControl(std::nullptr_t) noexcept {}
        SceneModeControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::ISceneModeControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TorchControl : winrt::Windows::Media::Devices::ITorchControl
    {
        TorchControl(std::nullptr_t) noexcept {}
        TorchControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::ITorchControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoDeviceController : winrt::Windows::Media::Devices::IVideoDeviceController,
        impl::require<VideoDeviceController, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        VideoDeviceController(std::nullptr_t) noexcept {}
        VideoDeviceController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IVideoDeviceController(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoDeviceControllerGetDevicePropertyResult : winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult
    {
        VideoDeviceControllerGetDevicePropertyResult(std::nullptr_t) noexcept {}
        VideoDeviceControllerGetDevicePropertyResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoTemporalDenoisingControl : winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl
    {
        VideoTemporalDenoisingControl(std::nullptr_t) noexcept {}
        VideoTemporalDenoisingControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WhiteBalanceControl : winrt::Windows::Media::Devices::IWhiteBalanceControl
    {
        WhiteBalanceControl(std::nullptr_t) noexcept {}
        WhiteBalanceControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IWhiteBalanceControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ZoomControl : winrt::Windows::Media::Devices::IZoomControl,
        impl::require<ZoomControl, winrt::Windows::Media::Devices::IZoomControl2>
    {
        ZoomControl(std::nullptr_t) noexcept {}
        ZoomControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IZoomControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ZoomSettings : winrt::Windows::Media::Devices::IZoomSettings
    {
        ZoomSettings(std::nullptr_t) noexcept {}
        ZoomSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::IZoomSettings(ptr, take_ownership_from_abi) {}
        ZoomSettings();
    };
}
#endif
