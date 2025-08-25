/*
 * Automatically generated C config: don't edit
 */

/* 
 * General setup
 * 
 */
#define CONFIG_MATH_EMULATION 1
#define CONFIG_BLK_DEV_HD 1
#define CONFIG_BLK_DEV_XD 1
#define CONFIG_INET 1
#define CONFIG_MAX_16M 1
#define CONFIG_SYSVIPC 1
#define CONFIG_M486 1

/* 
 * Program binary formats
 * 
 */
#define CONFIG_BINFMT_ELF 1
#define CONFIG_BINFMT_COFF 1

/* 
 * SCSI support
 * 
 */
#define CONFIG_SCSI 1

/* 
 * SCSI support type (disk, tape, CDrom)
 * 
 */
#define CONFIG_BLK_DEV_SD 1
#define CONFIG_CHR_DEV_ST 1
#define CONFIG_BLK_DEV_SR 1
#define CONFIG_CHR_DEV_SG 1

/* 
 * SCSI low-level drivers
 * 
 */
#define CONFIG_SCSI_AHA152X 1
#define CONFIG_SCSI_AHA1542 1
#define CONFIG_SCSI_AHA1740 1
#define CONFIG_SCSI_FUTURE_DOMAIN 1
#define CONFIG_SCSI_GENERIC_NCR5380 1
#define CONFIG_SCSI_PAS16 1
#define CONFIG_SCSI_SEAGATE 1
#define CONFIG_SCSI_T128 1
#define CONFIG_SCSI_ULTRASTOR 1
#define CONFIG_SCSI_7000FASST 1

/* 
 * Network device support
 * 
 */
#define CONFIG_ETHERCARDS 1
#define CONFIG_SLIP 1
#define SL_COMPRESSED 1
#define CONFIG_PLIP 1
#define CONFIG_NE2000 1
#define CONFIG_WD80x3 1
#define CONFIG_ULTRA 1
#define CONFIG_EL1 1
#define CONFIG_EL2 1
#define CONFIG_EL3 1
#define CONFIG_HPLAN 1
#define CONFIG_LANCE 1
#define CONFIG_AT1700 1
#define CONFIG_DEPCA 1
#define CONFIG_DE600 1
#define CONFIG_ATP 1

/* 
 */
#define CONFIG_CDU31A 1
#define CONFIG_MCD 1
#define CONFIG_SBPCD 1

/* 
 * Filesystems
 * 
 */
#define CONFIG_MINIX_FS 1
#define CONFIG_EXT_FS 1
#define CONFIG_EXT2_FS 1
#define CONFIG_XIA_FS 1
#define CONFIG_MSDOS_FS 1
#define CONFIG_PROC_FS 1
#define CONFIG_NFS_FS 1
#define CONFIG_ISO9660_FS 1
#define CONFIG_HPFS_FS 1
#define CONFIG_SYSV_FS 1

/* 
 * character devices
 * 
 */
#define CONFIG_PRINTER 1
#define CONFIG_BUSMOUSE 1
#define CONFIG_PSMOUSE 1
#define CONFIG_82C710_MOUSE 1
#define CONFIG_MS_BUSMOUSE 1
#define CONFIG_ATIXL_BUSMOUSE 1
#define CONFIG_SELECTION 1
#define CONFIG_TAPE_QIC02 1
#define CONFIG_FTAPE 1
#define NR_FTAPE_BUFFERS (3)

/* 
 * Sound
 * 
 */
#define CONFIG_SOUND 1

/* 
 * Kernel hacking
 * 
 */
#define CONFIG_PROFILE 1
#define CONFIG_SCSI_CONSTANTS 1
