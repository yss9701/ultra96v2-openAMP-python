
EXTRA_OEMAKE_append = " ${extra_settings} PRELOADED_BL33_BASE=${atf_bl33_load}"
sysconf = "${TOPDIR}/../project-spec/configs"
ATF_CONSOLE_zynqmp = "cadence1"
FILESEXTRAPATHS_append := ":${sysconf}"
atf_bl33_load = "0x8000000"
SRC_URI_append ="\
    file://config\
"
extra_settings = ""
