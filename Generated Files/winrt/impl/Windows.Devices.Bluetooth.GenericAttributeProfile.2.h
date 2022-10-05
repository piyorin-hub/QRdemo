// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220912.1

#pragma once
#ifndef WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_2_H
#define WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_2_H
#include "winrt/impl/Windows.Devices.Bluetooth.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    struct __declspec(empty_bases) GattCharacteristic : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic,
        impl::require<GattCharacteristic, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        GattCharacteristic(std::nullptr_t) noexcept {}
        GattCharacteristic(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic(ptr, take_ownership_from_abi) {}
        static auto ConvertShortIdToUuid(uint16_t shortId);
    };
    struct GattCharacteristicUuids
    {
        GattCharacteristicUuids() = delete;
        [[nodiscard]] static auto BatteryLevel();
        [[nodiscard]] static auto BloodPressureFeature();
        [[nodiscard]] static auto BloodPressureMeasurement();
        [[nodiscard]] static auto BodySensorLocation();
        [[nodiscard]] static auto CscFeature();
        [[nodiscard]] static auto CscMeasurement();
        [[nodiscard]] static auto GlucoseFeature();
        [[nodiscard]] static auto GlucoseMeasurement();
        [[nodiscard]] static auto GlucoseMeasurementContext();
        [[nodiscard]] static auto HeartRateControlPoint();
        [[nodiscard]] static auto HeartRateMeasurement();
        [[nodiscard]] static auto IntermediateCuffPressure();
        [[nodiscard]] static auto IntermediateTemperature();
        [[nodiscard]] static auto MeasurementInterval();
        [[nodiscard]] static auto RecordAccessControlPoint();
        [[nodiscard]] static auto RscFeature();
        [[nodiscard]] static auto RscMeasurement();
        [[nodiscard]] static auto SCControlPoint();
        [[nodiscard]] static auto SensorLocation();
        [[nodiscard]] static auto TemperatureMeasurement();
        [[nodiscard]] static auto TemperatureType();
        [[nodiscard]] static auto AlertCategoryId();
        [[nodiscard]] static auto AlertCategoryIdBitMask();
        [[nodiscard]] static auto AlertLevel();
        [[nodiscard]] static auto AlertNotificationControlPoint();
        [[nodiscard]] static auto AlertStatus();
        [[nodiscard]] static auto GapAppearance();
        [[nodiscard]] static auto BootKeyboardInputReport();
        [[nodiscard]] static auto BootKeyboardOutputReport();
        [[nodiscard]] static auto BootMouseInputReport();
        [[nodiscard]] static auto CurrentTime();
        [[nodiscard]] static auto CyclingPowerControlPoint();
        [[nodiscard]] static auto CyclingPowerFeature();
        [[nodiscard]] static auto CyclingPowerMeasurement();
        [[nodiscard]] static auto CyclingPowerVector();
        [[nodiscard]] static auto DateTime();
        [[nodiscard]] static auto DayDateTime();
        [[nodiscard]] static auto DayOfWeek();
        [[nodiscard]] static auto GapDeviceName();
        [[nodiscard]] static auto DstOffset();
        [[nodiscard]] static auto ExactTime256();
        [[nodiscard]] static auto FirmwareRevisionString();
        [[nodiscard]] static auto HardwareRevisionString();
        [[nodiscard]] static auto HidControlPoint();
        [[nodiscard]] static auto HidInformation();
        [[nodiscard]] static auto Ieee1107320601RegulatoryCertificationDataList();
        [[nodiscard]] static auto LnControlPoint();
        [[nodiscard]] static auto LnFeature();
        [[nodiscard]] static auto LocalTimeInformation();
        [[nodiscard]] static auto LocationAndSpeed();
        [[nodiscard]] static auto ManufacturerNameString();
        [[nodiscard]] static auto ModelNumberString();
        [[nodiscard]] static auto Navigation();
        [[nodiscard]] static auto NewAlert();
        [[nodiscard]] static auto GapPeripheralPreferredConnectionParameters();
        [[nodiscard]] static auto GapPeripheralPrivacyFlag();
        [[nodiscard]] static auto PnpId();
        [[nodiscard]] static auto PositionQuality();
        [[nodiscard]] static auto ProtocolMode();
        [[nodiscard]] static auto GapReconnectionAddress();
        [[nodiscard]] static auto ReferenceTimeInformation();
        [[nodiscard]] static auto Report();
        [[nodiscard]] static auto ReportMap();
        [[nodiscard]] static auto RingerControlPoint();
        [[nodiscard]] static auto RingerSetting();
        [[nodiscard]] static auto ScanIntervalWindow();
        [[nodiscard]] static auto ScanRefresh();
        [[nodiscard]] static auto SerialNumberString();
        [[nodiscard]] static auto GattServiceChanged();
        [[nodiscard]] static auto SoftwareRevisionString();
        [[nodiscard]] static auto SupportedNewAlertCategory();
        [[nodiscard]] static auto SupportUnreadAlertCategory();
        [[nodiscard]] static auto SystemId();
        [[nodiscard]] static auto TimeAccuracy();
        [[nodiscard]] static auto TimeSource();
        [[nodiscard]] static auto TimeUpdateControlPoint();
        [[nodiscard]] static auto TimeUpdateState();
        [[nodiscard]] static auto TimeWithDst();
        [[nodiscard]] static auto TimeZone();
        [[nodiscard]] static auto TxPowerLevel();
        [[nodiscard]] static auto UnreadAlertStatus();
    };
    struct __declspec(empty_bases) GattCharacteristicsResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult
    {
        GattCharacteristicsResult(std::nullptr_t) noexcept {}
        GattCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattClientNotificationResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult,
        impl::require<GattClientNotificationResult, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        GattClientNotificationResult(std::nullptr_t) noexcept {}
        GattClientNotificationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattDescriptor : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor,
        impl::require<GattDescriptor, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        GattDescriptor(std::nullptr_t) noexcept {}
        GattDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor(ptr, take_ownership_from_abi) {}
        static auto ConvertShortIdToUuid(uint16_t shortId);
    };
    struct GattDescriptorUuids
    {
        GattDescriptorUuids() = delete;
        [[nodiscard]] static auto CharacteristicAggregateFormat();
        [[nodiscard]] static auto CharacteristicExtendedProperties();
        [[nodiscard]] static auto CharacteristicPresentationFormat();
        [[nodiscard]] static auto CharacteristicUserDescription();
        [[nodiscard]] static auto ClientCharacteristicConfiguration();
        [[nodiscard]] static auto ServerCharacteristicConfiguration();
    };
    struct __declspec(empty_bases) GattDescriptorsResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult
    {
        GattDescriptorsResult(std::nullptr_t) noexcept {}
        GattDescriptorsResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattDeviceService : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService,
        impl::require<GattDeviceService, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        GattDeviceService(std::nullptr_t) noexcept {}
        GattDeviceService(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelectorFromUuid(winrt::guid const& serviceUuid);
        static auto GetDeviceSelectorFromShortId(uint16_t serviceShortId);
        static auto ConvertShortIdToUuid(uint16_t shortId);
        static auto FromIdAsync(param::hstring const& deviceId, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode);
        static auto GetDeviceSelectorForBluetoothDeviceId(winrt::Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId);
        static auto GetDeviceSelectorForBluetoothDeviceId(winrt::Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode);
        static auto GetDeviceSelectorForBluetoothDeviceIdAndUuid(winrt::Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid);
        static auto GetDeviceSelectorForBluetoothDeviceIdAndUuid(winrt::Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode);
    };
    struct __declspec(empty_bases) GattDeviceServicesResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult
    {
        GattDeviceServicesResult(std::nullptr_t) noexcept {}
        GattDeviceServicesResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattLocalCharacteristic : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic
    {
        GattLocalCharacteristic(std::nullptr_t) noexcept {}
        GattLocalCharacteristic(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattLocalCharacteristicParameters : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters
    {
        GattLocalCharacteristicParameters(std::nullptr_t) noexcept {}
        GattLocalCharacteristicParameters(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters(ptr, take_ownership_from_abi) {}
        GattLocalCharacteristicParameters();
    };
    struct __declspec(empty_bases) GattLocalCharacteristicResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult
    {
        GattLocalCharacteristicResult(std::nullptr_t) noexcept {}
        GattLocalCharacteristicResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattLocalDescriptor : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor
    {
        GattLocalDescriptor(std::nullptr_t) noexcept {}
        GattLocalDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattLocalDescriptorParameters : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters
    {
        GattLocalDescriptorParameters(std::nullptr_t) noexcept {}
        GattLocalDescriptorParameters(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters(ptr, take_ownership_from_abi) {}
        GattLocalDescriptorParameters();
    };
    struct __declspec(empty_bases) GattLocalDescriptorResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult
    {
        GattLocalDescriptorResult(std::nullptr_t) noexcept {}
        GattLocalDescriptorResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattLocalService : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService
    {
        GattLocalService(std::nullptr_t) noexcept {}
        GattLocalService(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattPresentationFormat : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat
    {
        GattPresentationFormat(std::nullptr_t) noexcept {}
        GattPresentationFormat(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto BluetoothSigAssignedNumbers();
        static auto FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description);
    };
    struct GattPresentationFormatTypes
    {
        GattPresentationFormatTypes() = delete;
        [[nodiscard]] static auto Boolean();
        [[nodiscard]] static auto Bit2();
        [[nodiscard]] static auto Nibble();
        [[nodiscard]] static auto UInt8();
        [[nodiscard]] static auto UInt12();
        [[nodiscard]] static auto UInt16();
        [[nodiscard]] static auto UInt24();
        [[nodiscard]] static auto UInt32();
        [[nodiscard]] static auto UInt48();
        [[nodiscard]] static auto UInt64();
        [[nodiscard]] static auto UInt128();
        [[nodiscard]] static auto SInt8();
        [[nodiscard]] static auto SInt12();
        [[nodiscard]] static auto SInt16();
        [[nodiscard]] static auto SInt24();
        [[nodiscard]] static auto SInt32();
        [[nodiscard]] static auto SInt48();
        [[nodiscard]] static auto SInt64();
        [[nodiscard]] static auto SInt128();
        [[nodiscard]] static auto Float32();
        [[nodiscard]] static auto Float64();
        [[nodiscard]] static auto SFloat();
        [[nodiscard]] static auto Float();
        [[nodiscard]] static auto DUInt16();
        [[nodiscard]] static auto Utf8();
        [[nodiscard]] static auto Utf16();
        [[nodiscard]] static auto Struct();
    };
    struct GattProtocolError
    {
        GattProtocolError() = delete;
        [[nodiscard]] static auto InvalidHandle();
        [[nodiscard]] static auto ReadNotPermitted();
        [[nodiscard]] static auto WriteNotPermitted();
        [[nodiscard]] static auto InvalidPdu();
        [[nodiscard]] static auto InsufficientAuthentication();
        [[nodiscard]] static auto RequestNotSupported();
        [[nodiscard]] static auto InvalidOffset();
        [[nodiscard]] static auto InsufficientAuthorization();
        [[nodiscard]] static auto PrepareQueueFull();
        [[nodiscard]] static auto AttributeNotFound();
        [[nodiscard]] static auto AttributeNotLong();
        [[nodiscard]] static auto InsufficientEncryptionKeySize();
        [[nodiscard]] static auto InvalidAttributeValueLength();
        [[nodiscard]] static auto UnlikelyError();
        [[nodiscard]] static auto InsufficientEncryption();
        [[nodiscard]] static auto UnsupportedGroupType();
        [[nodiscard]] static auto InsufficientResources();
    };
    struct __declspec(empty_bases) GattReadClientCharacteristicConfigurationDescriptorResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult,
        impl::require<GattReadClientCharacteristicConfigurationDescriptorResult, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        GattReadClientCharacteristicConfigurationDescriptorResult(std::nullptr_t) noexcept {}
        GattReadClientCharacteristicConfigurationDescriptorResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattReadRequest : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest
    {
        GattReadRequest(std::nullptr_t) noexcept {}
        GattReadRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattReadRequestedEventArgs : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs
    {
        GattReadRequestedEventArgs(std::nullptr_t) noexcept {}
        GattReadRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattReadResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult,
        impl::require<GattReadResult, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        GattReadResult(std::nullptr_t) noexcept {}
        GattReadResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattReliableWriteTransaction : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction,
        impl::require<GattReliableWriteTransaction, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        GattReliableWriteTransaction(std::nullptr_t) noexcept {}
        GattReliableWriteTransaction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction(ptr, take_ownership_from_abi) {}
        GattReliableWriteTransaction();
    };
    struct __declspec(empty_bases) GattRequestStateChangedEventArgs : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs
    {
        GattRequestStateChangedEventArgs(std::nullptr_t) noexcept {}
        GattRequestStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattServiceProvider : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider
    {
        GattServiceProvider(std::nullptr_t) noexcept {}
        GattServiceProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider(ptr, take_ownership_from_abi) {}
        static auto CreateAsync(winrt::guid const& serviceUuid);
    };
    struct __declspec(empty_bases) GattServiceProviderAdvertisementStatusChangedEventArgs : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs
    {
        GattServiceProviderAdvertisementStatusChangedEventArgs(std::nullptr_t) noexcept {}
        GattServiceProviderAdvertisementStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattServiceProviderAdvertisingParameters : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters,
        impl::require<GattServiceProviderAdvertisingParameters, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        GattServiceProviderAdvertisingParameters(std::nullptr_t) noexcept {}
        GattServiceProviderAdvertisingParameters(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters(ptr, take_ownership_from_abi) {}
        GattServiceProviderAdvertisingParameters();
    };
    struct __declspec(empty_bases) GattServiceProviderResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult
    {
        GattServiceProviderResult(std::nullptr_t) noexcept {}
        GattServiceProviderResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult(ptr, take_ownership_from_abi) {}
    };
    struct GattServiceUuids
    {
        GattServiceUuids() = delete;
        [[nodiscard]] static auto Battery();
        [[nodiscard]] static auto BloodPressure();
        [[nodiscard]] static auto CyclingSpeedAndCadence();
        [[nodiscard]] static auto GenericAccess();
        [[nodiscard]] static auto GenericAttribute();
        [[nodiscard]] static auto Glucose();
        [[nodiscard]] static auto HealthThermometer();
        [[nodiscard]] static auto HeartRate();
        [[nodiscard]] static auto RunningSpeedAndCadence();
        [[nodiscard]] static auto AlertNotification();
        [[nodiscard]] static auto CurrentTime();
        [[nodiscard]] static auto CyclingPower();
        [[nodiscard]] static auto DeviceInformation();
        [[nodiscard]] static auto HumanInterfaceDevice();
        [[nodiscard]] static auto ImmediateAlert();
        [[nodiscard]] static auto LinkLoss();
        [[nodiscard]] static auto LocationAndNavigation();
        [[nodiscard]] static auto NextDstChange();
        [[nodiscard]] static auto PhoneAlertStatus();
        [[nodiscard]] static auto ReferenceTimeUpdate();
        [[nodiscard]] static auto ScanParameters();
        [[nodiscard]] static auto TxPower();
    };
    struct __declspec(empty_bases) GattSession : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession,
        impl::require<GattSession, winrt::Windows::Foundation::IClosable>
    {
        GattSession(std::nullptr_t) noexcept {}
        GattSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession(ptr, take_ownership_from_abi) {}
        static auto FromDeviceIdAsync(winrt::Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId);
    };
    struct __declspec(empty_bases) GattSessionStatusChangedEventArgs : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs
    {
        GattSessionStatusChangedEventArgs(std::nullptr_t) noexcept {}
        GattSessionStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattSubscribedClient : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient
    {
        GattSubscribedClient(std::nullptr_t) noexcept {}
        GattSubscribedClient(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattValueChangedEventArgs : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs
    {
        GattValueChangedEventArgs(std::nullptr_t) noexcept {}
        GattValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattWriteRequest : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest
    {
        GattWriteRequest(std::nullptr_t) noexcept {}
        GattWriteRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattWriteRequestedEventArgs : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs
    {
        GattWriteRequestedEventArgs(std::nullptr_t) noexcept {}
        GattWriteRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GattWriteResult : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult
    {
        GattWriteResult(std::nullptr_t) noexcept {}
        GattWriteResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
