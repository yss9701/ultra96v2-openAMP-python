SUMMARY = "Simple test application"
SECTION = "PETALINUX/apps"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRC_URI = "file://amp_test2.elf"
S = "${WORKDIR}"
INSANE_SKIP_${PN} = "arch"
do_install() {
 install -d ${D}/lib/firmware
 install -m 0644 ${S}/amp_test2.elf ${D}/lib/firmware/amp_test2.elf
}
FILES_${PN} = "/lib/firmware/amp_test2.elf"
