/*
 *  Canon Inkjet Printer Driver for Linux
 *  Copyright CANON INC. 2001-2011
 *  All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307, USA.
 */

/*
 * macro...
 */
#define SETSTATUSNUM    6
#define STANDARDMSGNUM  16
#define MAXCHKSTS       9	//Ver.3.10 plus chk_other_operation
//#define MAXCHKSTS       8	//Ver.3.10 plus chk_otheruser_use
//#define MAXCHKSTS       7
//#define MAXCHKSTS       17
#define MAXCOLORNUM     10
#define MAXINKNUM       8		// V2.3 6->8
#define MAXCARTRIDGENUM 2

#define SKIPCHKFUNC     5	//Ver.3.10 jump to chk_jobstatus
//#define SKIPCHKFUNC     4	//Ver.3.10 jump to chk_jobstatus
//#define SKIPCHKFUNC     3	//Ver.3.00 jump to chk_jobstatus
//#define SKIPCHKFUNC     9

#define UNIQUESTS       -10
#define SERVICECALL     -11
#define IDNOTFOUND      -12
#define OCCUR           -13
#define NOTINKOUT       -14
#define INKLOW          -15
#define INKOUT          -16
#define INKUNKNOWN      -17
#define OTHERMESSAGENO  -18


#define SPACE           0x20
#define UNJUSTVALUE     '*'
#define ENDTAG          '\0'
#define SCANNERDETECT   '2'
#define TESTPRINTNOW    'T'
#define DUMMYSCANNER    '3'
#define ALLCOLORCHAR    "KkLlcmCMYrNBEGbeH"	//  add 'l' 'r'(2.4) 'N'(2.5) 'Gbg'(2.7) 'H'(3.4)
//#define ALLCOLORCHAR    "KkLlcmCMYrNBEGbe"	//  add 'l' 'r'(2.4) 'N'(2.5) 'Gbg'(2.7)

#define DEV_1284	"PAR "
#define DEV_USB		"USB "
#define DEV_1394	"1394"
#define DEV_CHARSIZE	4

#define	OPMSGTBL_ID_MAX		4
#define	INKLVL_UNKOWN	"UK"
#define	INKLVL_UNKOWNUUU	"UUU"
#define	INKLVL_UNSETTANK	"NNN"


//Ver.3.00 for Jam1300 pattern etc
#define	OC1300_PAPERJAM_PATTERN01				0
#define	OC1300_PAPERJAM_PATTERN02				1
#define	OC1300_PAPERJAM_PATTERN03				2
#define	OC1300_PAPERJAM_PATTERN04				3
#define	OC1303_PAPERJAM_PATTERN03				4
#define	OC1303_PAPERJAM_PATTERN04				5
#define	OC1304_PAPERJAM_PATTERN03				6
#define	OC1304_PAPERJAM_PATTERN04				7
#define	OC1000_PAPEROUT_PATTERN04				8
#define	OC1003_PAPEROUT_PATTERN04				9
#define	OC2700_PANELCHK_PATTERN01				10
#define	OC2001_USBDEVICE_PATTERN01				11
#define	OC2001_USBDEVICE_PATTERN02				12
#define	OC1401_CARTRIDGENONE_PATTERN01			13
#define	OC1403_CARTRIDGENONE_PATTERN01			14
#define	OC1700_USEDTANK_ALMOST_PATTERN02		15
#define	OC2500_HEADALIGNMENT_PATTERN02			16
#define	OC141X_HARDWARE_PATTERN01				17
#define	OC1688_INKEMPTY_TANK_PATTERN02			18
#define	OC1600_INKOUT_TANK_PATTERN02			19
#define	OC1683_INKUNKNOWN_TANK_PATTERN02		20
#define	OC1681_PLURALERROR_TANK_PATTERN01		21
#define	OC1684_DIFFERENT_REGION_TANK_PATTERN01	22
#define	OC1680_POSITION_MISMACH_TANK_PATTERN01	23
#define	OC1660_UNINSTALLATION_TANK_PATTERN01	24
#define	OC1683_REMAIN_UNKNOWN_PATTERN01			25
#define	OC1689_REMAIN_UNKNOWN_PATTERN01			26
#define	OC1200_COVER_OPEN_PATTERN02				27
#define	OC1851_CDR_GUIDE_PRINT_PATTERN02		28
#define	OC1856_CDR_GUIDE_PATTERN02				29
#define	OC1250_COVER_CLOSE_PATTERN02			30
#define	OC1810_BATTERY_ERROR_PATTERN01			31

#define	OC1000_PAPEROUT_PATTERN03				32
#define	OC1003_PAPEROUT_PATTERN03				33
#define	OC1403_CARTRIDGENONE_PATTERN02			34
#define	OC1700_USEDTANK_ALMOST_PATTERN01		35
#define	OC2500_HEADALIGNMENT_PATTERN01			36
#define	OC1600_INKOUT_TANK_PATTERN01			37
#define	OC1688_INKEMPTY_TANK_PATTERN01			38
#define	OC1250_COVER_CLOSE_PATTERN01			39
#define	OC1851_CDR_GUIDE_PRINT_PATTERN01		40
#define	OC1856_CDR_GUIDE_PATTERN01				41
#define	OC1401_CARTRIDGENONE_PATTERN02			42
#define	OC1200_COVER_OPEN_PATTERN03				43
#define	OC1701_USEDTANK_ALMOST_PATTERN01		44
#define	OC1701_USEDTANK_ALMOST_PATTERN02		45
#define	OC1401_CARTRIDGENONE_PATTERN03			46
#define	OC1200_COVER_OPEN_PATTERN01				47
#define	OC1701_USEDTANK_ALMOST_PATTERN03		48
#define	OC1700_USEDTANK_ALMOST_PATTERN03		49
#define	OC1403_CARTRIDGENONE_PATTERN03			50
#define	OC1687_INKTANK_NOTPROPERLY_PATTERN01	51
#define	OC1687_INKTANK_NOTPROPERLY_PATTERN02	52
#define	OC1687_INKTANK_NOTPROPERLY_PATTERN03	53
#define	OC1684_DIFFERENT_REGION_TANK_PATTERN02	54
#define	OC1686_REMAIN_UNKNOWN2_PATTERN02		55
#define	OC1000_PAPEROUT_PATTERN02				56
#define	OC1688_INKEMPTY_TANK_PATTERN03			57
#define	OC1686_REMAIN_UNKNOWN2_PATTERN01		58
#define	OC1250_COVER_OPEN_PATTERN02				59
#define	OC1000_PAPEROUT_PATTERN01				60
#define	OC1686_REMAIN_UNKNOWN2_PATTERN03		61
#define	OC1003_PAPEROUT_PATTERN02				62
#define	OC1303_PAPERJAM_PATTERN02				63
#define	OC1304_PAPERJAM_PATTERN02				64
#define	OC1688_INKEMPTY_TANK_PATTERN04			65
#define	OC1683_REMAIN_UNKNOWN_PATTERN02			66
#define	OC1000_PAPEROUT_PATTERN05				67
#define	OC1003_PAPEROUT_PATTERN01				68
#define	OC1303_PAPERJAM_PATTERN01				69
#define	OC1304_PAPERJAM_PATTERN01				70
#define	OC1683_REMAIN_UNKNOWN_PATTERN03			71
#define	OC1000_PAPEROUT_PATTERN06				72
#define	OC1003_PAPEROUT_PATTERN05				73
#define	OC1303_PAPERJAM_PATTERN05				74
#define	OC1003_PAPEROUT_PATTERN06				75
#define	OC1303_PAPERJAM_PATTERN06				76
#define	OC1003_PAPEROUT_PATTERN07				77
#define	OC1303_PAPERJAM_PATTERN07				78
#define	OC1003_PAPEROUT_PATTERN08				79
#define	OC1303_PAPERJAM_PATTERN08				80
#define	OC1688_INKEMPTY_TANK_PATTERN05			81
#define	OC1701_USEDTANK_ALMOST_PATTERN04		82
#define	OC1700_USEDTANK_ALMOST_PATTERN04		83
#define	OC1600_INKOUT_TANK_PATTERN03			84

#define	OC1000_PAPEROUT_PATTERN07				85
#define	OC1300_PAPERJAM_PATTERN05				86
#define	OC1686_REMAIN_UNKNOWN2_PATTERN04		87
#define	OC1688_INKEMPTY_TANK_PATTERN06			88
#define	OC1251_SMARTTRAY_CLOSE_PATTERN01		89
#define	OC1701_USEDTANK_ALMOST_PATTERN05		90
#define	OC1700_USEDTANK_ALMOST_PATTERN05		91
#define	OC1251_SMARTTRAY_CLOSE_PATTERN02		92
#define	OC1701_USEDTANK_ALMOST_PATTERN06		93
#define	OC1700_USEDTANK_ALMOST_PATTERN06		94
#define	OC1851_CDR_GUIDE_PRINT_PATTERN03		95
#define	OC1856_CDR_GUIDE_PATTERN03				96
#define	OC1851_CDR_GUIDE_PRINT_PATTERN04		97
#define	OC1856_CDR_GUIDE_PATTERN04				98
#define	OC1310_DUPLEX_STOPPAGE_PATTERN01		99
#define	OC1310_DUPLEX_STOPPAGE_PATTERN02		100
#define	OC1750_OLDINKTANK_PATTERN01				1001
#define	OC1250_COVER_CLOSE_PATTERN03			1002
#define	OC1851_CDR_GUIDE_PRINT_PATTERN05		1003
#define	OC1851_CDR_GUIDE_PRINT_PATTERN06		1004
#define	OC1851_CDR_GUIDE_PRINT_PATTERN07		1005
#define	OC1858_CDR_GUIDE_PATTERN01				1006
#define	OC1858_CDR_GUIDE_PATTERN02				1007
#define	OC1858_CDR_GUIDE_PATTERN03				1008
#define	OC1000_PAPEROUT_PATTERN08				1009
#define	OC1003_PAPEROUT_PATTERN09				1010
#define	OC1300_PAPERJAM_PATTERN06				1011
#define	OC1303_PAPERJAM_PATTERN09				1012
#define	OC1304_PAPERJAM_PATTERN05				1013
#define	OC1600_INKOUT_TANK_PATTERN04			1014
#define	OC1700_USEDTANK_ALMOST_PATTERN07		1015
#define	OC1701_USEDTANK_ALMOST_PATTERN07		1016
#define	OC1856_CDR_GUIDE_PATTERN05				1017
#define	OC1310_DUPLEX_STOPPAGE_PATTERN03		1018
#define	OC2500_HEADALIGNMENT_PATTERN03			1019
#define	OC1688_INKEMPTY_TANK_PATTERN07			1020
#define	OC1890_PROTECTIVEMATERIAL_PATTERN01		1021
#define	OC1485_CARTRIDGENONE_PATTERN01			1022
#define	OC1003_PAPEROUT_PATTERN10				1023
#define	OC1202_HEADCOVER_OPEN_PATTERN01			1024
#define	OC1687_INKTANK_NOTPROPERLY_PATTERN04	1025
#define	OC1303_PAPERJAM_PATTERN10				1026
#define	OC1304_PAPERJAM_PATTERN06				1027
#define	OC1200_COVER_OPEN_PATTERN04				1028
#define	OC1303_PAPERJAM_PATTERN11				1029
#define	OC1304_PAPERJAM_PATTERN07				1030
#define	OC1310_DUPLEX_STOPPAGE_PATTERN04		1031
#define	OC1310_DUPLEX_STOPPAGE_PATTERN05		1032
#define	OC1310_DUPLEX_STOPPAGE_PATTERN06		1033
#define	OC1003_PAPEROUT_PATTERN11				1034
#define	OC1851_CDR_GUIDE_PRINT_PATTERN08		1035
#define	OC1486_POSITION_MISMACH_CART_PATTERN01	1036
#define	OC1487_PLURALERROR_CART_PATTERN01		1037
#define	OC1688_INKEMPTY_TANK_PATTERN08			1038
#define	OC1688_INKEMPTY_TANK_PATTERN09			1039
#define	OC1310_DUPLEX_STOPPAGE_PATTERN07		1040



#define	DJS_BASE_PRINTING_PATTERN01				101
#define	DJS_BASE_ONLINE_PATTERN01				102
#define	DJS_JOBCANCEL_PATTERN01					103
#define	DJS_JOB_PREPARE_PATTERN01				104
#define	DJS_PREPARE_PATTERN01					105
#define	DJS_JOB_DELAY_PATTERN01					106
#define	DJS_JOBCANCEL_PATTERN02					107
#define	DJS_JOBCANCEL_PATTERN03					108
#define	DJS_JOBCANCEL_PATTERN04					110


#define	DBS_CLEANING_PATTERN01					201
#define	DBS_CARTRIDGE_CHANGE_PATTERN01			202
#define	DBS_TEST_PRINTING_PATTERN01				203
#define	DBS_PRINTER_USED_PATTERN01				204
#define	DBS_TANK_CHANGE_PATTERN01				205
#define	DBS_PRINTER_PATTERN01					206
#define	DBS_CARTRIDGE_CHANGE_PATTERN02			207
#define	DBS_CARTRIDGE_CHANGE_PATTERN03			208
#define	DBS_CARTRIDGE_CHANGE_PATTERN04			209
#define	DBS_HEADPROTECT_PATTERN01				210
#define	DBS_HEADPROTECT_PATTERN02				211



#define	WR1500_DWS_INKLOW_PATTERN01				301
#define	WR1500_DWS_INKLOW_PATTERN02				302
#define	WR1570_DWS_INKOUT_PATTERN02				303
#define	WR1600_DWS_INKSTATUS_OFF_PATTERN01		401
#define	WR1800_DWS_BATTERYLOW_PATTERN01			403
#define	WAR_HCF_PATTERN01						404


#define	COMMON_SERIVICE_ERROR_PATTERN			501
#define	SC5B00_USEDTANK_FULL_PATTERN01			502
#define	SC5B01_USEDTANK_FULL_PATTERN01			503
#define	SC5B00_USEDTANK_FULL_PATTERN02			504
#define	SC5B01_USEDTANK_FULL_PATTERN02			505
#define	SCA100_BATTERY_TROUBLE_PATTERN01		506
#define	SCB200_VH_MONITOR_EROOR_PATTERN01		507
#define	SC5101_CARRIAGEPOSITION_PATTERN01		508
#define	SC5020_SCANNER_LOCK_ERROR_PATTERN01		509


#define	SCOTHER_COMMON_SERIVICE_ERROR_PATTERN02		599

/*
 * The structure object for device information.
 */
typedef struct {
  int   dev;
  char  status;
  char  recv[3];
}output_dev, *Output_dev;

/*
 * struct...
 */
typedef struct {
  char header[4];
  char dev[4];
  char pr_name[16];
  char base_stat[2];
  char busy_stat;
  char job_stat;
  struct {
	char type;
	char exchange;
  }cartridge[2];
  struct {
	char color;
	char alert;
	char fill[3];
	char resv;
  }ink[8];
  char ink_check;
//Ver.2.70
  char destination;
//  char lever_position;
  char warning[12];
  char operator_call[12];
  char service_call[4];
//Ver.2.70
  char lever_position;
//Ver.3.00
  char prnregion;
//Ver.3.10
  char service_call2;
  char reserve2[10];
  char cr;
}ST_CUPSSTS, *St_cupssts;

typedef struct{
  char* dev;
  gint id;
}ST_DEVID_TBL;

typedef struct{
  char status;
  int msgid;
}ST_MSGTBL;

typedef struct{
  char status;
  const ST_MSGTBL *region;
}ST_REGION_TBL;

typedef struct{
  char*           pr_name;
  const ST_MSGTBL *color;
}ST_DEVCLR_TBL;

/* Ver.3.00 Switch Model */
typedef struct{
  char*           pr_name;
  const ST_REGION_TBL *inktype;
}ST_INKTYPE_TBL;


typedef struct{
  int  msgid;
  int  id[OPMSGTBL_ID_MAX];
  char status;
}ST_OPMSGTBL;

//Ver.3.00 for Jam1300 pattern etc
typedef struct{
//  char*	pr_name;
  int 	msgid;
  int 	str_pattern;
}ST_STRING_PATTERN_TBL;

//Ver.3.00 for string pattern etc
typedef struct{
  char*	pr_name;
  const ST_MSGTBL *model_pattern;
//  const ST_STRING_PATTERN_TBL *model_pattern;
}ST_MODEL_PATTERN_TBL;

typedef struct{
  int  pattern_id;
  int  message_id[7];
}ST_STRING_TABLE;

typedef struct{
  char status;
  char status_ctk;
}ST_DOCCTKTBL;

typedef struct{
  char status;
  int before_msgid;
  int after_msgid;
}ST_MSGCNVPDRTBL;


typedef int (*SETSTATUSFUNC) (ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);


/*
 * prototype...
 */
int chk_other_operation(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_otheruser_use(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_servicecall(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_operatorcall_level1(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_busystatus(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_jobstatus(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_basestatus(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_warning(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_inklow_part1(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_noinkcheck(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
int chk_noinkcheck2(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
//Ver.3.00
int set_pictareaInfo(ST_CUPSSTS *p_tbl, ST_PrinterStatus *p_sts);
