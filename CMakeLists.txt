add_library(mbed-blackpill-f401cc INTERFACE)

target_sources(mbed-blackpill-f401cc
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-blackpill-f401cc
    INTERFACE
        .
)

target_link_libraries(mbed-blackpill-f401cc INTERFACE mbed-stm32f401xc)

# HOTFIX: rename linker script to match name in corresponding CMakeLists.txt file
set(TARGET_TOOLCHAIN_GCC_ARM_PATH "../mbed-os/targets/TARGET_STM/TARGET_STM32F4/TARGET_STM32F401xC/TOOLCHAIN_GCC_ARM")
if (NOT EXISTS "${TARGET_TOOLCHAIN_GCC_ARM_PATH}/stm32f401xc.ld")
    file(READ "${TARGET_TOOLCHAIN_GCC_ARM_PATH}/STM32F401XC.ld" TARGET_TOOLCHAIN_GCC_ARM_LD_CONTENT)
    file(WRITE "${TARGET_TOOLCHAIN_GCC_ARM_PATH}/stm32f401xc.ld" "${TARGET_TOOLCHAIN_GCC_ARM_LD_CONTENT}")
endif ()
