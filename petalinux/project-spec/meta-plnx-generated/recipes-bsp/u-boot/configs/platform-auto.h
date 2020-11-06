/*
 * This file is auto-generated by PetaLinux SDK 
 * DO NOT MODIFY this file, the modification will not persist
 */

#ifndef __PLNX_CONFIG_H
#define __PLNX_CONFIG_H

/* The following table includes the supported baudrates */


#define CONFIG_SYS_BAUDRATE_TABLE  { 4800, 9600, 19200, 38400, 57600, 115200 }



/* processor - psu_cortexa53_0 */
#define CONFIG_CPU_ARMV8
#define CONFIG_CLOCKS
#define CONFIG_REMAKE_ELF
#define CONFIG_BOARD_EARLY_INIT_F
#define CONFIG_ARM_DCC
#define CONFIG_MP

/* main_memory - psu_ddr_0 */

/* uart - psu_uart_1 */
#define PSSERIAL0	"psserial0=setenv stdout ttyPS0;setenv stdin ttyPS0\0"
#define SERIAL_MULTI	"serial=setenv stdout serial;setenv stdin serial\0"
#define CONSOLE_ARG	"console=console=ttyPS0,115200\0"
#define SERIAL_MULTI  "serial=setenv stdout serial;setenv stdin serial\0"
#define CONFIG_BAUDRATE	115200

/* sdio - psu_sd_1 */
#define CONFIG_SUPPORT_EMMC_BOOT

/* sdio - psu_sd_0 */

/* rtc - psu_rtc */

/* i2c - psu_i2c_1 */

/* usb - psu_usb_1 */
#define CONFIG_USB_CABLE_CHECK
#define CONFIG_THOR_RESET_OFF
#define CONFIG_SYS_DFU_DATA_BUF_SIZE 0x1800000
#define DFU_DEFAULT_POLL_TIMEOUT 300

/* usb - psu_usb_0 */

/* zynq_ultra_ps_e_0 */
#define COUNTER_FREQUENCY 100000000

/* intc - psu_acpu_gic */
#define ACPU_GIC_BASEADDR	0xF9010000
#define CONFIG_GICV2	1
#define GICD_BASE	(ACPU_GIC_BASEADDR)
#define GICC_BASE (ACPU_GIC_BASEADDR + 0x10000)

/* FPGA */

/* Memory testing handling */
#define CONFIG_SYS_MEMTEST_START	0x0
#define CONFIG_SYS_MEMTEST_END	(0x0 + 0x1000)
#define CONFIG_SYS_LOAD_ADDR	(0x0 + 0x100000) /* default load address */
#define CONFIG_SYS_INIT_SP_ADDR	(CONFIG_SYS_LOAD_ADDR - GENERATED_GBL_DATA_SIZE)
#define CONFIG_NR_DRAM_BANKS	2

/* Size of malloc() pool */
#define SIZE	0x2000000
#define CONFIG_SYS_MALLOC_LEN	SIZE

#ifdef CONFIG_DM_SPI_FLASH
# define CONFIG_SPI_GENERIC
# define CONFIG_SF_DEFAULT_SPEED	30000000
# define CONFIG_ENV_SPI_MAX_HZ		30000000
# define CONFIG_SF_DUAL_FLASH
# define CONFIG_CMD_SPI
# define CONFIG_CMD_SF
#endif



/* BOOTP options */
#define CONFIG_BOOTP_SERVERIP
#define CONFIG_BOOTP_BOOTFILESIZE
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME
#define CONFIG_BOOTP_MAY_FAIL
#define CONFIG_BOOTP_DNS
#define CONFIG_BOOTP_SUBNETMASK
#define CONFIG_BOOTP_PXE

/*Command line configuration.*/
#define CONFIG_CMDLINE_EDITING
#define CONFIG_AUTO_COMPLETE

#define CONFIG_IMAGE_FORMAT_LEGACY
#define CONFIG_SUPPORT_RAW_INITRD

/* Miscellaneous configurable options */
#define CONFIG_SYS_CBSIZE	2048/* Console I/O Buffer Size      */
#define CONFIG_SYS_PBSIZE	(CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)
#define CONFIG_SYS_BARGSIZE CONFIG_SYS_CBSIZE

/* Use the HUSH parser */
#define CONFIG_SYS_PROMPT_HUSH_PS2 "> "

#define CONFIG_ENV_VARS_UBOOT_CONFIG
#define CONFIG_ENV_OVERWRITE	/* Allow to overwrite the u-boot environment variables */

#define CONFIG_LMB

/* FDT support */
#define CONFIG_DISPLAY_BOARDINFO_LATE


/* Boot Argument Buffer Size */
#define CONFIG_SYS_MAXARGS      64      /* max number of command args */
#define CONFIG_SYS_LONGHELP

/* Initial memory map for Linux */
#define CONFIG_SYS_BOOTMAPSZ 0x8000000

/* Environment settings*/
#define CONFIG_ENV_SIZE	0x80000

/* PREBOOT */
#define CONFIG_PREBOOT	"echo U-BOOT for ultra96v2-oob-2019-1;setenv preboot; echo; "

/* Extra U-Boot Env settings */
#define CONFIG_EXTRA_ENV_SETTINGS \
	SERIAL_MULTI \ 
	CONSOLE_ARG \ 
	DFU_ALT_INFO_RAM \ 
	DFU_ALT_INFO_MMC \ 
	PSSERIAL0 \ 
	"bootenv=uEnv.txt\0" \ 
	"importbootenv=echo \"Importing environment from SD ...\"; " \ 
		"env import -t ${loadbootenv_addr} $filesize\0" \ 
	"loadbootenv=load mmc $sdbootdev:$partid ${loadbootenv_addr} ${bootenv}\0" \ 
	"sd_uEnvtxt_existence_test=test -e mmc $sdbootdev:$partid /uEnv.txt\0" \ 
	"uenvboot=" \ 
		"if run sd_uEnvtxt_existence_test; then " \ 
			"run loadbootenv; " \ 
			"echo Loaded environment from ${bootenv}; " \ 
			"run importbootenv; " \ 
			"fi; " \ 
		"if test -n $uenvcmd; then " \ 
			"echo Running uenvcmd ...; " \ 
			"run uenvcmd; " \ 
		"fi\0" \ 
	"autoload=no\0" \ 
	"sdbootdev=0\0" \ 
	"clobstart=0x10000000\0" \ 
	"netstart=0x10000000\0" \ 
	"dtbnetstart=0x23fff000\0" \ 
	"loadaddr=0x10000000\0" \ 
	"boot_img=BOOT.BIN\0" \ 
	"install_boot=mmcinfo && fatwrite mmc ${sdbootdev} ${clobstart} ${boot_img} ${filesize}\0" \ 
	"install_bootenv=mmcinfo && fatwrite mmc ${sdbootdev} ${clobstart} ${bootenv_img} ${filesize}\0" \ 
	"kernel_img=image.ub\0" \ 
	"install_kernel=mmcinfo && fatwrite mmc ${sdbootdev} ${clobstart} ${kernel_img} ${filesize}\0" \ 
	"cp_kernel2ram=mmcinfo && fatload mmc ${sdbootdev} ${netstart} ${kernel_img}\0" \ 
	"dtb_img=system.dtb\0" \ 
	"sd_update_dtb=echo Updating dtb from SD; mmcinfo && fatload mmc ${sdbootdev}:1 ${clobstart} ${dtb_img} && run install_dtb\0" \ 
	"loadbootenv_addr=0x00100000\0" \ 
	"fault=echo ${img} image size is greater than allocated place - partition ${img} is NOT UPDATED\0" \ 
	"test_crc=if imi ${clobstart}; then run test_img; else echo ${img} Bad CRC - ${img} is NOT UPDATED; fi\0" \ 
	"test_img=setenv var \"if test ${filesize} -gt ${psize}\\; then run fault\\; else run ${installcmd}\\; fi\"; run var; setenv var\0" \ 
	"default_bootcmd=run uenvboot; run cp_kernel2ram && bootm ${netstart}\0" \ 
""

/* BOOTCOMMAND */
#define CONFIG_BOOTCOMMAND	"run default_bootcmd"

#endif /* __PLNX_CONFIG_H */
