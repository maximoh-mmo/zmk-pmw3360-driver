zephyr_include_directories(src)

zephyr_library()

zephyr_library_sources_ifdef(CONFIG_PMW3360 src/pmw3360.c)