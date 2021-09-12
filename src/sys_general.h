/*
 * Gather and return information about the system
 */

#ifndef __SYS_GENERAL_H
#define __SYS_GENERAL_H

#include "types.h"

/* IDs for the various Foenix machines supported */

#define SYS_FOENIX_FMX          1
#define SYS_FOENIX_U            2
#define SYS_FOENIX_U_PLUS       3
#define SYS_FOENIX_A2560K       4
#define SYS_FOENIX_A2560U       5
#define SYS_FOENIX_A2560U_PLUS  6
#define SYS_FOENIX_A2560X       7
#define SYS_FOENIX_GENX         8

/* IDs for the CPUs supported */

#define CPU_WDC65816            0x16  /* CPU code for the Western Design Center 65816 */
#define CPU_M68000              0x20  /* CPU code for the Motorola 68000 */
#define CPU_M68010              0x21  /* CPU code for the Motorola 68010 */
#define CPU_M68020              0x22  /* CPU code for the Motorola 68020 */
#define CPU_M68030              0x23  /* CPU code for the Motorola 68030 */
#define CPU_M68040              0x24  /* CPU code for the Motorola 68040 */
#define CPU_I486DX              0x34  /* CPU code for the Intel 486DX */

/*
 * Structure to describe the hardware
 */
typedef struct s_sys_info {
    unsigned short model;       /* Code to say what model of machine this is */
    unsigned short cpu;         /* Code to say which CPU is running */
    unsigned short gabe_rev;    /* Code for the GABE revision number */
    unsigned short vicky_rev;   /* Code for the VICKY revision number */
    int system_ram_size;        /* The number of bytes of system RAM on the board */
    bool has_floppy;            /* TRUE if the board has a floppy drive installed */
    bool has_hard_drive;        /* TRUE if the board has a PATA device installed */
    bool has_expansion_card;    /* TRUE if an expansion card is installed on the device */
    bool has_ethernet;          /* TRUE if an ethernet port is present */
    unsigned short screens;     /* How many screens are on this computer */
} t_sys_info, *p_sys_info;

/*
 * Fill out a s_sys_info structure with the information about the current system
 *
 * Inputs:
 * info = pointer to a s_sys_info structure to fill out
 */
extern void sys_get_info(p_sys_info info);

#endif