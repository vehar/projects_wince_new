//
//  File: bq27xxx_new.h
//

#ifndef __BQ27510_H
#define __BQ27510_H

typedef struct bq_dataram_s {	          //Ray 131220
    unsigned short Control;	
    short AtRate;	
    unsigned short AtRateTTE;	
    short Temp;	
    short Voltage;	
    unsigned short Flags;	
    short NomAvailCap;	
    short FullAvailCap;	
    unsigned short RemCap;	
    unsigned short FullChgCap;	
    short          AvgCurr;	
    unsigned short TTE;	
    unsigned short TTF;	
    unsigned short StbyCurr;	
    unsigned short StbyTTE;	
    unsigned short MaxLoadCurr;	
    unsigned short MaxLoadTTE;	
    unsigned short AvailEnergy;	
    unsigned short AvgPow;	
    unsigned short TTEAtConstPow;	
    unsigned short CycleCnt;	
    unsigned short StateOfChg;
} bq_dataram;


#define BQ27510_SLAVE_ADDRESS	0x55        //Ray 131129 
#define BQ27510_ADDRESS_WRITE   0XAA        //Ray 131203
#define BQ27510_ADDRESS_READ    0XAB        //Ray 131203


// Gas gauge registers for BQ27510
#define bq27500CMD_CNTL_LSB  0x00
#define bq27500CMD_CNTL_MSB  0x01
#define bq27500CMD_AR_LSB    0x02
#define bq27500CMD_AR_MSB    0x03
#define bq27500CMD_ARTTE_LSB 0x04
#define bq27500CMD_ARTTE_MSB 0x05
#define bq27500CMD_TEMP_LSB  0x06
#define bq27500CMD_TEMP_MSB  0x07
#define bq27500CMD_VOLT_LSB  0x08
#define bq27500CMD_VOLT_MSB  0x09
#define bq27500CMD_FLAGS_LSB 0x0A
#define bq27500CMD_FLAGS_MSB 0x0B
#define bq27500CMD_NAC_LSB   0x0C
#define bq27500CMD_NAC_MSB   0x0D
#define bq27500CMD_FAC_LSB   0x0E
#define bq27500CMD_FAC_MSB   0x0F
#define bq27500CMD_RM_LSB    0x10
#define bq27500CMD_RM_MSB    0x11
#define bq27500CMD_FCC_LSB   0x12
#define bq27500CMD_FCC_MSB   0x13
#define bq27500CMD_AI_LSB    0x14
#define bq27500CMD_AI_MSB    0x15
#define bq27500CMD_TTE_LSB   0x16
#define bq27500CMD_TTE_MSB   0x17
#define bq27500CMD_TTF_LSB   0x18
#define bq27500CMD_TTF_MSB   0x19
#define bq27500CMD_SI_LSB    0x1A
#define bq27500CMD_SI_MSB    0x1B
#define bq27500CMD_STTE_LSB  0x1C
#define bq27500CMD_STTE_MSB  0x1D
#define bq27500CMD_MLI_LSB   0x1E
#define bq27500CMD_MLI_MSB   0x1F
#define bq27500CMD_MLTTE_LSB 0x20
#define bq27500CMD_MLTTE_MSB 0x21
#define bq27500CMD_AE_LSB    0x22
#define bq27500CMD_AE_MSB    0x23
#define bq27500CMD_AP_LSB    0x24
#define bq27500CMD_AP_MSB    0x25
#define bq27500CMD_TTECP_LSB 0x26
#define bq27500CMD_TTECP_MSB 0x27
#define bq27500CMD_RSVD_LSB  0x28
#define bq27500CMD_RSVD_MSB  0x29
#define bq27500CMD_CC_LSB    0x2A
#define bq27500CMD_CC_MSB    0x2B
#define bq27500CMD_SOC_LSB   0x2C
#define bq27500CMD_SOC_MSB   0x2D
#define bq27500CMD_DCAP_LSB  0x3C
#define bq27500CMD_DCAP_MSB  0x3D
#define bq27500CMD_DFCLS     0x3E
#define bq27500CMD_DFBLK     0x3F
#define bq27500CMD_ADF       0x40
#define bq27500CMD_ACKSDFD   0x54
#define bq27500CMD_DFDCKS    0x60
#define bq27500CMD_DFDCNTL   0x61
#define bq27500CMD_DNAMELEN  0x62
#define bq27500CMD_DNAME     0x63
#define bq27500CMD_APPSTAT   0x6A


//**********************************//

// Gas gauge registers for BQ27410
#define bq27410CMD_CNTL_LSB  0x00
#define bq27410CMD_CNTL_MSB  0x01
#define bq27410CMD_TEMP_LSB  0x02
#define bq27410CMD_TEMP_MSB  0x03
#define bq27410CMD_VOLT_LSB  0x04
#define bq27410CMD_VOLT_MSB  0x05
#define bq27410CMD_FLAGS_LSB 0x06
#define bq27410CMD_FLAGS_MSB 0x07
#define bq27410CMD_NAC_LSB   0x08
#define bq27410CMD_NAC_MSB   0x09
#define bq27410CMD_FAC_LSB   0x0a
#define bq27410CMD_FAC_MSB   0x0b
#define bq27410CMD_RM_LSB    0x0c
#define bq27410CMD_RM_MSB    0x0d
#define bq27410CMD_FCC_LSB   0x0e
#define bq27410CMD_FCC_MSB   0x0f
#define bq27410CMD_AI_LSB    0x10
#define bq27410CMD_AI_MSB    0x11
#define bq27410CMD_SI_LSB    0x12
#define bq27410CMD_SI_MSB    0x13
#define bq27410CMD_MLI_LSB   0x14
#define bq27410CMD_MLI_MSB   0x15
#define bq27410CMD_AE_LSB    0x16
#define bq27410CMD_AE_MSB    0x17
#define bq27410CMD_AP_LSB    0x18
#define bq27410CMD_AP_MSB    0x19
#define bq27410CMD_SOC_LSB   0x1c
#define bq27410CMD_SOC_MSB   0x1d
#define bq27410CMD_ITEMP_LSB 0x1e
#define bq27410CMD_ITEMP_MSB 0x1f
#define bq27410CMD_SCH_LSB   0x20
#define bq27410CMD_SCH_MSB   0x21
#define bq27410CMD_OPCFG_LSB 0x3a
#define bq27410CMD_OPCFG_MSB 0x3b
#define bq27410CMD_DCAP_LSB  0x3c
#define bq27410CMD_DCAP_MSB  0x3d
#define bq27410CMD_DFCLS     0x3e
#define bq27410CMD_DFBLK     0x3f
#define bq27410CMD_DFD       0x40
#define bq27410CMD_DFDCKS    0x60
#define bq27410CMD_DFDCNTL   0x61
#define bq27410CMD_DNAMELEN  0x62
#define bq27410CMD_DNAME     0x63

// 0x14-0x6D are reserved XXXXX
#define BQ_EE_CMD           0x6E
#define BQ_EE_ILMD          0x76
#define BQ_EE_SEDVF         0x77
#define BQ_EE_SEDV1         0x78
#define BQ_EE_ISLC          0x79
#define BQ_EE_DMFSD         0x7A
#define BQ_EE_TAPER         0x7B
#define BQ_EE_PKCFG         0x7C
#define BQ_EE_ID3           0x7D
#define BQ_EE_DCOMP         0x7E
#define BQ_EE_TCOMP         0x7F

// BQ flags register bits
#define BQ_FLAGS_BAT_DET	(1 << 3)
#define BQ_FLAGS_SOC1		(1 << 2)
#define BQ_FLAGS_SOCF		(1 << 1)
#define BQ_FLAGS_DSG		(1 << 0)

#endif
