if(CONFIG_TMC_API)

#kfbtodo is this the right way to have tmc-api/ ?
zephyr_include_directories(
	../
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
# kfbtodo are ../'s the right solution?
zephyr_library_sources(
	../tmc/helpers/CRC.c
	../tmc/helpers/Functions.c
)

endif() # CONFIG_TMC_HELPERS


# Individual TMC chips
if(CONFIG_TMC_4330 OR CONFIG_TMC_4331 OR CONFIG_TMC_4361A)
zephyr_include_directories(tmc/ic/TMC43xx)
endif()

if(CONFIG_TMC_262)
zephyr_include_directories(tmc/ic/TMC262)
endif()

if(CONFIG_TMC_389)
zephyr_include_directories(tmc/ic/TMC389)
endif()

if(CONFIG_TMC_424)
zephyr_include_directories(tmc/ic/TMC424)
endif()

if(CONFIG_TMC_429)
zephyr_include_directories(tmc/ic/TMC429)
endif()

if(CONFIG_TMC_457)
zephyr_include_directories(tmc/ic/TMC457)
endif()

if(CONFIG_TMC_8461 OR CONFIG_TMC_8462)
zephyr_include_directories(tmc/ic/TMC486x)
endif()

if(CONFIG_TMC_2130)
zephyr_include_directories(tmc/ic/TMC2130)
endif()

if(CONFIG_TMC_2160)
zephyr_include_directories(tmc/ic/TMC2160)
endif()

if(CONFIG_TMC_2208)
zephyr_include_directories(tmc/ic/TMC2208)
endif()

if(CONFIG_TMC_2209)
zephyr_include_directories(tmc/ic/TMC2209)
endif()

if(CONFIG_TMC_2224)
zephyr_include_directories(tmc/ic/TMC2224)
endif()

if(CONFIG_TMC_2225)
zephyr_include_directories(tmc/ic/TMC2225)
endif()

if(CONFIG_TMC_2226)
zephyr_include_directories(tmc/ic/TMC2226)
endif()

if(CONFIG_TMC_2240)
zephyr_include_directories(tmc/ic/TMC2240)
endif()

if(CONFIG_TMC_2300)
zephyr_include_directories(tmc/ic/TMC2300)
endif()

if(CONFIG_TMC_2590)
zephyr_include_directories(tmc/ic/TMC2590)
endif()

if(CONFIG_TMC_2660)
zephyr_include_directories(tmc/ic/TMC2660)
endif()

if(CONFIG_TMC_4210)
zephyr_include_directories(tmc/ic/TMC4210)
endif()

if(CONFIG_TMC_4330)
zephyr_include_directories(tmc/ic/TMC4330)
endif()

if(CONFIG_TMC_4331)
zephyr_include_directories(tmc/ic/TMC4331)
endif()

if(CONFIG_TMC_4361A)
zephyr_include_directories(tmc/ic/TMC4361A)
endif()

if(CONFIG_TMC_4671)
zephyr_include_directories(../tmc/ic/TMC4671)
zephyr_library_sources(../tmc/ic/TMC4671/TMC4671.c)
endif()

if(CONFIG_TMC_5031)
zephyr_include_directories(tmc/ic/TMC5031)
endif()

if(CONFIG_TMC_5041)
zephyr_include_directories(tmc/ic/TMC5041)
endif()

if(CONFIG_TMC_5062)
zephyr_include_directories(tmc/ic/TMC5062)
endif()

if(CONFIG_TMC_5072)
zephyr_include_directories(tmc/ic/TMC5072)
endif()

if(CONFIG_TMC_5130)
zephyr_include_directories(tmc/ic/TMC5130)
endif()

if(CONFIG_TMC_5160)
zephyr_include_directories(tmc/ic/TMC5160)
endif()

if(CONFIG_TMC_5240)
zephyr_include_directories(tmc/ic/TMC5240)
endif()

if(CONFIG_TMC_5271)
zephyr_include_directories(tmc/ic/TMC5271)
endif()

if(CONFIG_TMC_5272)
zephyr_include_directories(tmc/ic/TMC5272)
endif()

if(CONFIG_TMC_6100)
zephyr_include_directories(tmc/ic/TMC6100)
endif()

if(CONFIG_TMC_6200)
zephyr_include_directories(tmc/ic/TMC6200)
endif()

if(CONFIG_TMC_7300)
zephyr_include_directories(tmc/ic/TMC7300)
endif()

if(CONFIG_TMC_8461)
zephyr_include_directories(tmc/ic/TMC8461)
endif()

if(CONFIG_TMC_8462)
zephyr_include_directories(tmc/ic/TMC8462)
endif()

endif() # CONFIG_TMC_API
