// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220912.1

#pragma once
#ifndef WINRT_Windows_ApplicationModel_LockScreen_2_H
#define WINRT_Windows_ApplicationModel_LockScreen_2_H
#include "winrt/impl/Windows.ApplicationModel.LockScreen.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen
{
    struct __declspec(empty_bases) LockApplicationHost : winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost
    {
        LockApplicationHost(std::nullptr_t) noexcept {}
        LockApplicationHost(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) LockScreenBadge : winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge
    {
        LockScreenBadge(std::nullptr_t) noexcept {}
        LockScreenBadge(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenInfo : winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo
    {
        LockScreenInfo(std::nullptr_t) noexcept {}
        LockScreenInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenUnlockingDeferral : winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral
    {
        LockScreenUnlockingDeferral(std::nullptr_t) noexcept {}
        LockScreenUnlockingDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenUnlockingEventArgs : winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs
    {
        LockScreenUnlockingEventArgs(std::nullptr_t) noexcept {}
        LockScreenUnlockingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
