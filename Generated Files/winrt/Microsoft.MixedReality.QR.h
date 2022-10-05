// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220912.1

#pragma once
#ifndef WINRT_Microsoft_MixedReality_QR_H
#define WINRT_Microsoft_MixedReality_QR_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220912.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220912.1"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Microsoft.MixedReality.QR.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::Id() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_Id(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::SpatialGraphNodeId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_SpatialGraphNodeId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::Version() const
    {
        winrt::Microsoft::MixedReality::QR::QRVersion value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_Version(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::PhysicalSideLength() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_PhysicalSideLength(&value));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::SystemRelativeLastDetectedTime() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_SystemRelativeLastDetectedTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::LastDetectedTime() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_LastDetectedTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_Data(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::RawDataSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->get_RawDataSize(&value));
        return value;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCode<D>::GetRawData(array_view<uint8_t> buffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCode)->GetRawData(buffer.size(), put_abi(buffer)));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeAddedEventArgs<D>::Code() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeAddedEventArgs)->get_Code(&value));
        return winrt::Microsoft::MixedReality::QR::QRCode{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeRemovedEventArgs<D>::Code() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeRemovedEventArgs)->get_Code(&value));
        return winrt::Microsoft::MixedReality::QR::QRCode{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeUpdatedEventArgs<D>::Code() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeUpdatedEventArgs)->get_Code(&value));
        return winrt::Microsoft::MixedReality::QR::QRCode{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Added(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeAddedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->add_Added(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Added(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeAddedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Added_revoker>(this, Added(handler));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Added(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->remove_Added(impl::bind_in(token));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Updated(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeUpdatedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->add_Updated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Updated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeUpdatedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Updated_revoker>(this, Updated(handler));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Updated(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->remove_Updated(impl::bind_in(token));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Removed(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeRemovedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->add_Removed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Removed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeRemovedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Removed_revoker>(this, Removed(handler));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Removed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->remove_Removed(impl::bind_in(token));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::EnumerationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::EnumerationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->remove_EnumerationCompleted(impl::bind_in(token));
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->Start());
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->Stop());
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcher<D>::GetList() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcher)->GetList(&result));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::MixedReality::QR::QRCode>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcherStatics<D>::IsSupported() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcherStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Microsoft_MixedReality_QR_IQRCodeWatcherStatics<D>::RequestAccessAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::MixedReality::QR::IQRCodeWatcherStatics)->RequestAccessAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::MixedReality::QR::QRCodeWatcherAccessStatus>{ operation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::MixedReality::QR::IQRCode> : produce_base<D, winrt::Microsoft::MixedReality::QR::IQRCode>
    {
        int32_t __stdcall get_Id(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SpatialGraphNodeId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SpatialGraphNodeId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::MixedReality::QR::QRVersion>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhysicalSideLength(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PhysicalSideLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemRelativeLastDetectedTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().SystemRelativeLastDetectedTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastDetectedTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().LastDetectedTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RawDataSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().RawDataSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRawData(uint32_t __bufferSize, uint8_t* buffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetRawData(array_view<uint8_t>(reinterpret_cast<uint8_t*>(buffer), reinterpret_cast<uint8_t*>(buffer) + __bufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::MixedReality::QR::IQRCodeAddedEventArgs> : produce_base<D, winrt::Microsoft::MixedReality::QR::IQRCodeAddedEventArgs>
    {
        int32_t __stdcall get_Code(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::MixedReality::QR::QRCode>(this->shim().Code());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::MixedReality::QR::IQRCodeRemovedEventArgs> : produce_base<D, winrt::Microsoft::MixedReality::QR::IQRCodeRemovedEventArgs>
    {
        int32_t __stdcall get_Code(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::MixedReality::QR::QRCode>(this->shim().Code());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::MixedReality::QR::IQRCodeUpdatedEventArgs> : produce_base<D, winrt::Microsoft::MixedReality::QR::IQRCodeUpdatedEventArgs>
    {
        int32_t __stdcall get_Code(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::MixedReality::QR::QRCode>(this->shim().Code());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::MixedReality::QR::IQRCodeWatcher> : produce_base<D, winrt::Microsoft::MixedReality::QR::IQRCodeWatcher>
    {
        int32_t __stdcall add_Added(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Added(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeAddedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Added(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Updated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Updated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeUpdatedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Updated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Removed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Removed(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Microsoft::MixedReality::QR::QRCodeRemovedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Removed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::MixedReality::QR::QRCodeWatcher, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetList(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::MixedReality::QR::QRCode>>(this->shim().GetList());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::MixedReality::QR::IQRCodeWatcherStatics> : produce_base<D, winrt::Microsoft::MixedReality::QR::IQRCodeWatcherStatics>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::MixedReality::QR::QRCodeWatcherAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::MixedReality::QR
{
    inline QRCodeWatcher::QRCodeWatcher() :
        QRCodeWatcher(impl::call_factory_cast<QRCodeWatcher(*)(winrt::Windows::Foundation::IActivationFactory const&), QRCodeWatcher>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<QRCodeWatcher>(); }))
    {
    }
    inline auto QRCodeWatcher::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IQRCodeWatcherStatics const&), QRCodeWatcher, IQRCodeWatcherStatics>([](IQRCodeWatcherStatics const& f) { return f.IsSupported(); });
    }
    inline auto QRCodeWatcher::RequestAccessAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::MixedReality::QR::QRCodeWatcherAccessStatus>(*)(IQRCodeWatcherStatics const&), QRCodeWatcher, IQRCodeWatcherStatics>([](IQRCodeWatcherStatics const& f) { return f.RequestAccessAsync(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::MixedReality::QR::IQRCode> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::IQRCodeAddedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::IQRCodeRemovedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::IQRCodeUpdatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::IQRCodeWatcher> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::IQRCodeWatcherStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::QRCode> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::QRCodeAddedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::QRCodeRemovedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::QRCodeUpdatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::QR::QRCodeWatcher> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif