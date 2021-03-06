/*  Canon Inkjet Printer Driver for Linux
 *  Copyright CANON INC. 2001-2013
 *  All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307, USA.
 *
 * NOTE:
 *  - As a special exception, this program is permissible to link with the
 *    libraries released as the binary modules.
 *  - If you write modifications of your own for these programs, it is your
 *    choice whether to permit this exception to apply to your modifications.
 *    If you do not wish that, delete this exception.
 */


// Messages conversion table

/* Version */
char *g_version_param[] =
{
	"LUM_VERSION_PRODUCT_NAME",
	"LUM_VERSION_VER_STR",
	"LUM_VERSION_COPYRIGHT1_STR",
	"LUM_VERSION_COPYRIGHT2_STR",
};

/* Upper */
char *g_model_param[] =
{
	"BJF850",
	"BJF860",
	"BJF870",
	"BJF360",
	"BJS600",
	"BJS630",
	"BJS6300",
	"BJF900",
	"BJF9000",
	"BJS500",
	"BJS300",
	"PIXUS550I",
	"PIXUS850I",
	"PIXUS950I",
	"I250",
	"I255",
	"PIXUS560I",
	"PIXUS860I",
	"PIXUS990I",
	"PIXUSIP3100",
	"PIXUSIP4100",
	"PIXUSIP8600",
	"PIXMAIP1000",
	"PIXMAIP1500",
	"IP2200",
	"IP4200",
	"IP6600D",
	"IP7500",
	"MP500",
	"IP3300",
	"MP510",
	"IP4300",
	"MP600",
	"MP160",
	"IP90",
	"IP2500",
	"IP1800",
	"MP140",
	"MP210",
	"IP3500",
	"IP4500",
	"MP610",
	"MP520",
	"IP100",
	"IP2600",
	"IP3600",
	"IP4600",
	"MP630",
	"MP540",
	"MP240",
	"MP190",
	"IP1900",
	"MX860",
	"MX320",
	"MX330",
	"MP250",
	"MP270",
	"MP490",
	"MP550",
	"MP560",
	"IP4700",
	"MP640",
	"IP2700",
	"MX340",
	"MX350",
	"MX870",
	"MP495",
	"MP280",
	"MG5100",
	"MG5200",
	"IP4800",
	"MG6100",
	"MG8100",
	"MX360",
	"MX410",
	"MX420",
	"MX880",
	"IX6500",
	"MG2100",
	"MG3100",
	"MG4100",
	"MG5300",
	"MG6200",
	"MG8200",
	"IP4900",
	"E500",
	"MX710",
	"MX890",
	"MX370",
	"MX430",
	"MX510",
	"E600",
	"MP230",
	"MG2200",
	"E510",
	"MG3200",
	"MG4200",
	"IP7200",
	"MG5400",
	"MG6300",
	"MX720",
	"MX920",
	"MX390",
	"MX450",
	"MX520",
	"E610",
	NULL,
};

char *g_model_key[] =
{
	"model_BJF850",
	"model_BJF860",
	"model_BJF870",
	"model_BJF360",
	"model_BJS600",
	"model_BJS630",
	"model_BJS6300",
	"model_BJF900",
	"model_BJF9000",
	"model_BJS500",
	"model_BJS300",
	"model_PIXUS550i",
	"model_PIXUS850i",
	"model_PIXUS950i",
	"model_i250",
	"model_i255",
	"model_PIXUS560i",
	"model_PIXUS860i",
	"model_PIXUS990i",
	"model_PIXUSiP3100",
	"model_PIXUSiP4100",
	"model_PIXUSiP8600",
	"model_PIXMAiP1000",
	"model_PIXMAiP1500",
	"model_iP2200",
	"model_iP4200",
	"model_iP6600d",
	"model_iP7500",
	"model_MP500",
	"model_iP3300",
	"model_MP510",
	"model_iP4300",
	"model_MP600",
	"model_MP160",
	"model_iP90",
	"model_iP2500",
	"model_iP1800",
	"model_MP140",
	"model_MP210",
	"model_iP3500",
	"model_iP4500",
	"model_MP610",
	"model_MP520",
	"model_IP100",
	"model_IP2600",
	"model_IP3600",
	"model_IP4600",
	"model_MP630",
	"model_MP540",
	"model_MP240",
	"model_MP190",
	"model_IP1900",
	"model_MX860",
	"model_MX320",
	"model_MX330",
	"model_MP250",
	"model_MP270",
	"model_MP490",
	"model_MP550",
	"model_MP560",
	"model_IP4700",
	"model_MP640",
	"model_IP2700",
	"model_MX340",
	"model_MX350",
	"model_MX870",
	"model_MP495",
	"model_MP280",
	"model_MG5100",
	"model_MG5200",
	"model_IP4800",
	"model_MG6100",
	"model_MG8100",
	"model_MX360",
	"model_MX410",
	"model_MX420",
	"model_MX880",
	"model_IX6500",
	"model_MG2100",
	"model_MG3100",
	"model_MG4100",
	"model_MG5300",
	"model_MG6200",
	"model_MG8200",
	"model_IP4900",
	"model_E500",
	"model_MX710",
	"model_MX890",
	"model_MX370",
	"model_MX430",
	"model_MX510",
	"model_E600",
	"model_MP230",
	"model_MG2200",
	"model_E510",
	"model_MG3200",
	"model_MG4200",
	"model_IP7200",
	"model_MG5400",
	"model_MG6300",
	"model_MX720",
	"model_MX920",
	"model_MX390",
	"model_MX450",
	"model_MX520",
	"model_E610",
	NULL,
};

short g_model_value[] = {
	CND_BJF850,
	CND_F860,
	CND_F870,
	CND_BJF360,
	CND_BJS600,
	CND_BJS630,
	CND_BJS6300,
	CND_BJF900,
	CND_BJF9000,
	CND_BJS500,
	CND_BJS300,
	CND_PIXUS550I,
	CND_PIXUS850I,
	CND_PIXUS950I,
	CND_I250,
	CND_I255,
	CND_PIXUS560I,
	CND_PIXUS860I,
	CND_PIXUS990I,
	CND_PIXUSIP3100,
	CND_PIXUSIP4100,
	CND_PIXUSIP8600,
	CND_PIXMAIP1000,
	CND_PIXMAIP1500,
	CND_IP2200,
	CND_IP4200,
	CND_IP6600D,
	CND_IP7500,
	CND_MP500,
	CND_IP3300,
	CND_MP510,
	CND_IP4300,
	CND_MP600,
	CND_MP160,
	CND_IP90,
	CND_IP2500,
	CND_IP1800,
	CND_MP140,
	CND_MP210,
	CND_IP3500,
	CND_IP4500,
	CND_MP610,
	CND_MP520,
	CND_IP100,
	CND_IP2600,
	CND_IP3600,
	CND_IP4600,
	CND_MP630,
	CND_MP540,
	CND_MP240,
	CND_MP190,
	CND_IP1900,
	CND_MX860,
	CND_MX320,
	CND_MX330,
	CND_MP250,
	CND_MP270,
	CND_MP490,
	CND_MP550,
	CND_MP560,
	CND_IP4700,
	CND_MP640,
	CND_IP2700,
	CND_MX340,
	CND_MX350,
	CND_MX870,
	CND_MP495,
	CND_MP280,
	CND_MG5100,
	CND_MG5200,
	CND_IP4800,
	CND_MG6100,
	CND_MG8100,
	CND_MX360,
	CND_MX410,
	CND_MX420,
	CND_MX880,
	CND_IX6500,
	CND_MG2100,
	CND_MG3100,
	CND_MG4100,
	CND_MG5300,
	CND_MG6200,
	CND_MG8200,
	CND_IP4900,
	CND_E500,
	CND_MX710,
	CND_MX890,
	CND_MX370,
	CND_MX430,
	CND_MX510,
	CND_E600,
	CND_MP230,
	CND_MG2200,
	CND_E510,
	CND_MG3200,
	CND_MG4200,
	CND_IP7200,
	CND_MG5400,
	CND_MG6300,
	CND_MX720,
	CND_MX920,
	CND_MX390,
	CND_MX450,
	CND_MX520,
	CND_E610,
};

