#kfbtodo: move this and the Kconfig to new gen4/zephyr/modules/tmc-api/
# May need to play around with https://docs.zephyrproject.org/latest/develop/modules.html
# https://docs.zephyrproject.org/latest/develop/modules.html#integrate-modules-in-zephyr-build-system
if(CONFIG_TMC_API)

zephyr_include_directories(
	../
	../tmc/ic/
)

zephyr_library()

if(CONFIG_TMC_RAMP)

zephyr_include_directories(
	tmc/ramp
)
zephyr_library_sources(
	tmc/ramp/Ramp.c
	tmc/ramp/LinearRamp.c
	tmc/ramp/LinearRamp1.c
)

endif() # CONFIG_TMC_RAMP


if(CONFIG_TMC_HELPERS)

zephyr_include_directories(
	tmc/helpers
)

zephyr_library_sources(
	../tmc/helpers/CRC.c
	../tmc/helpers/Functions.c
)

endif() # CONFIG_TMC_HELPERS


# Individual TMC chips
if(CONFIG_TMC_4671)
zephyr_library_sources(../tmc/ic/TMC4671/TMC4671.c)
endif()

endif() # CONFIG_TMC_API
