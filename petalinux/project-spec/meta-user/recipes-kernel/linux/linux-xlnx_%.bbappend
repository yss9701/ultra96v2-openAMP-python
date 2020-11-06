SRC_URI += "file://bsp.cfg \
            file://user_2020-10-28-14-00-00.cfg \
            file://user_2020-11-03-15-29-00.cfg \
            file://user_2020-11-03-16-04-00.cfg \
            file://user_2020-11-03-16-36-00.cfg \
            "
SRC_URI += "file://user_2019-10-31-20-33-00.cfg"
            
SRC_URI_append = " file://fix_u96v2_pwrseq_simple.patch"

FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
