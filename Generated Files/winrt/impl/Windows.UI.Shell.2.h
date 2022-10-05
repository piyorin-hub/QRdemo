// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220912.1

#pragma once
#ifndef WINRT_Windows_UI_Shell_2_H
#define WINRT_Windows_UI_Shell_2_H
#include "winrt/impl/Windows.UI.Shell.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct AdaptiveCardBuilder
    {
        AdaptiveCardBuilder() = delete;
        static auto CreateAdaptiveCardFromJson(param::hstring const& value);
    };
    struct __declspec(empty_bases) TaskbarManager : winrt::Windows::UI::Shell::ITaskbarManager,
        impl::require<TaskbarManager, winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        TaskbarManager(std::nullptr_t) noexcept {}
        TaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::ITaskbarManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
}
#endif
