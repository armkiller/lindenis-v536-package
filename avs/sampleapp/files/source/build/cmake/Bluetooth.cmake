#
# Setup the Bluetooth compiler options.
#
# To build with Bluetooth capabilties, specify:
# cmake <path-to-source> -DBLUETOOTH_BLUEZ

option(BLUETOOTH_BLUEZ "Enable BlueZ implementation of the Bluetooth" OFF)

if(BLUETOOTH_BLUEZ)
     message("Creating ${PROJECT_NAME} with BlueZ implementation of Bluetooth")
     find_package(PkgConfig)
     pkg_check_modules(GIO REQUIRED gio-2.0>=2.4)
     pkg_check_modules(GIO_UNIX REQUIRED gio-unix-2.0>=2.4)
     pkg_check_modules(SBC REQUIRED)
     add_definitions(-DBLUETOOTH_BLUEZ)
     # When we have other implementations, add another definition to represent whether Bluetooth is enabled.
     # add_definitions(-DBLUETOOTH_ENABLED)
else()
    message ("Bluetooth implementation not supported")
endif()
