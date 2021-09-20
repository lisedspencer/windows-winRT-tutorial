// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210913.7

#pragma once
#ifndef WINRT_Windows_System_Profile_SystemManufacturers_0_H
#define WINRT_Windows_System_Profile_SystemManufacturers_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers
{
    struct IOemSupportInfo;
    struct ISmbiosInformationStatics;
    struct ISystemSupportDeviceInfo;
    struct ISystemSupportInfoStatics;
    struct ISystemSupportInfoStatics2;
    struct OemSupportInfo;
    struct SmbiosInformation;
    struct SystemSupportDeviceInfo;
    struct SystemSupportInfo;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> = L"Windows.System.Profile.SystemManufacturers.OemSupportInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> = L"Windows.System.Profile.SystemManufacturers.SmbiosInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo> = L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> = L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> = L"Windows.System.Profile.SystemManufacturers.IOemSupportInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> = L"Windows.System.Profile.SystemManufacturers.ISmbiosInformationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo> = L"Windows.System.Profile.SystemManufacturers.ISystemSupportDeviceInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> = L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2> = L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics2";
    template <> inline constexpr guid guid_v<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo>{ 0x8D2EAE55,0x87EF,0x4266,{ 0x86,0xD0,0xC4,0xAF,0xBE,0xB2,0x9B,0xB9 } }; // 8D2EAE55-87EF-4266-86D0-C4AFBEB29BB9
    template <> inline constexpr guid guid_v<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ 0x080CCA7C,0x637C,0x48C4,{ 0xB7,0x28,0xF9,0x27,0x38,0x12,0xDB,0x8E } }; // 080CCA7C-637C-48C4-B728-F9273812DB8E
    template <> inline constexpr guid guid_v<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>{ 0x05880B99,0x8247,0x441B,{ 0xA9,0x96,0xA1,0x78,0x4B,0xAB,0x79,0xA8 } }; // 05880B99-8247-441B-A996-A1784BAB79A8
    template <> inline constexpr guid guid_v<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>{ 0xEF750974,0xC422,0x45D7,{ 0xA4,0x4D,0x5C,0x1C,0x00,0x43,0xA2,0xB3 } }; // EF750974-C422-45D7-A44D-5C1C0043A2B3
    template <> inline constexpr guid guid_v<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>{ 0x33F349A4,0x3FA1,0x4986,{ 0xAA,0x4B,0x05,0x74,0x20,0x45,0x5E,0x6D } }; // 33F349A4-3FA1-4986-AA4B-057420455E6D
    template <> struct default_interface<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>{ using type = winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo; };
    template <> struct default_interface<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>{ using type = winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo; };
    template <> struct abi<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportAppLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SerialNumber(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperatingSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemManufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemProductName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemSku(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemHardwareVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemFirmwareVersion(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalSystemEdition(void**) noexcept = 0;
            virtual int32_t __stdcall get_OemSupportInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalDeviceInfo(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) SupportLink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) SupportAppLink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SupportProvider() const;
    };
    template <> struct consume<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SerialNumber() const;
    };
    template <> struct consume<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OperatingSystem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SystemManufacturer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SystemProductName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SystemSku() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SystemHardwareVersion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SystemFirmwareVersion() const;
    };
    template <> struct consume<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LocalSystemEdition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo) OemSupportInfo() const;
    };
    template <> struct consume<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo) LocalDeviceInfo() const;
    };
    template <> struct consume<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics2<D>;
    };
}
#endif