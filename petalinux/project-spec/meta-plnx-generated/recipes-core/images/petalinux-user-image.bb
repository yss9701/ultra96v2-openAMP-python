DESCRIPTION = "PETALINUX image definition for Xilinx boards"
LICENSE = "MIT"

require recipes-core/images/petalinux-image-common.inc 

inherit extrausers 
COMMON_FEATURES = "\
		ssh-server-dropbear \
		hwcodecs \
		package-management \
		"
IMAGE_LINGUAS = " "

IMAGE_INSTALL = "\
		kernel-modules \
		bc \
		i2c-tools \
		mtd-utils \
		usbutils \
		canutils \
		ethtool \
		openssh-sftp-server \
		git \
		pciutils \
		run-postinsts \
		coreutils \
		udev-extraconf \
		openamp-fw-echo-testd \
		openamp-fw-mat-muld \
		openamp-fw-rpc-demo \
		packagegroup-core-boot \
		packagegroup-core-ssh-dropbear \
		tcf-agent \
		watchdog-init \
		bridge-utils \
		hellopm \
		packagegroup-petalinux \
		packagegroup-petalinux-benchmarks \
		packagegroup-petalinux-matchbox \
		packagegroup-petalinux-openamp \
		packagegroup-petalinux-self-hosted \
		packagegroup-petalinux-utils \
		packagegroup-petalinux-v4lutils \
		packagegroup-petalinux-x11 \
		amptest1 \
		sds-lib \
		ultra96-radio-leds \
		ultra96-wpa \
		wilc \
		libftdi \
		amptest \
		bonnie++ \
		cmake \
		iperf3 \
		iw \
		lmsensors-sensorsdetect \
		nano \
		packagegroup-base-extended \
		packagegroup-petalinux-96boards-sensors \
		packagegroup-petalinux-ultra96-webapp \
		python-pyserial \
		python3-pip \
		ultra96-ap-setup \
		ultra96-misc \
		wilc3000-fw \
		"
EXTRA_USERS_PARAMS = "usermod -P root root;"
