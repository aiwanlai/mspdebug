/* MSPDebug - debugging tool for MSP430 MCUs
 * Copyright (C) 2009-2012 Daniel Beer
 * Copyright (C) 2012 Stanimir Bonev
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef DEVICELIST_H_
#define DEVICELIST_H_

#include <stdint.h>

struct device_table {
	uint8_t         device_id_param[9];
	uint16_t        device_type_id;
	const char	*name;
};

typedef enum {
	DT_UNKNOWN_DEVICE = 0,
	DT_MSP430F11x1,
	DT_MSP430F11x1D,
	DT_MSP430F133,
	DT_MSP430F135,
	DT_MSP430F147,
	DT_MSP430F148,
	DT_MSP430F149,
	DT_MSP430F413P,
	DT_MSP430F41xC,
	DT_MSP430F11x1A,
	DT_MSP430F12x,
	DT_MSP430F43x,
	DT_MSP430F44x,
	DT_MSP430F12x2,
	DT_MSP430F11x2,
	DT_MSP430F12x2C,
	DT_PMS430F16x,
	DT_MSP430FE423,
	DT_MSP430FE425,
	DT_MSP430FE427,
	DT_MSP430F423,
	DT_MSP430F425,
	DT_MSP430F427,
	DT_MSP430FW42x,
	DT_MSP430F4230,
	DT_MSP430F4250,
	DT_MSP430F42x0,
	DT_MSP430F155,
	DT_MSP430F156,
	DT_MSP430F157,
	DT_MSP430F167,
	DT_MSP430F168,
	DT_MSP430F169,
	DT_MSP430F1610,
	DT_MSP430F1611,
	DT_MSP430F1612,
	DT_MSP430FG43x,
	DT_MSP430FG4619,
	DT_MSP430F21x1,
	DT_TMS430F1390,
	DT_TMS430F1250,
	DT_TMS430C1250,
	DT_TMS430EMU,
	DT_MSP430F20x3,
	DT_MSP430F20x2,
	DT_MSP430F20x1,
	DT_MSP430F2234,
	DT_MSP430F2254,
	DT_MSP430F2274,
	DT_MSP430FG4618,
	DT_MSP430F2330,
	DT_MSP430F2350,
	DT_MSP430F2370,
	DT_MSP430F2232,
	DT_MSP430F2252,
	DT_MSP430F2272,
	DT_MSP430F2619,
	DT_MSP430F2618,
	DT_MSP430F2419,
	DT_MSP430F2418,
	DT_MSP430FE423A,
	DT_MSP430FE425A,
	DT_MSP430FE427A,
	DT_MSP430F423A,
	DT_MSP430F425A,
	DT_MSP430F427A,
	DT_MSP430F4783,
	DT_MSP430F4784,
	DT_MSP430F4793,
	DT_MSP430F4794,
	DT_MSP430F249,
	DT_MSP430F248,
	DT_MSP430F247,
	DT_MSP430F235,
	DT_MSP430F2491,
	DT_MSP430F2481,
	DT_MSP430F2471,
	DT_MSP430F233,
	DT_MSP430F2410,
	DT_MSP430F2132,
	DT_MSP430F2122,
	DT_MSP430F2112,
	DT_XMS430F5438,
	DT_MSP430F5438,
	DT_MSP430F5436,
	DT_MSP430F5419,
	DT_MSP430FE4232,
	DT_MSP430FE42x2,
	DT_MSP430F5437,
	DT_MSP430F5435,
	DT_MSP430F5418,
	DT_MSP430FG4250,
	DT_MSP430FG42x0,
	DT_MSP430FE4272,
	DT_MSP430FG477,
	DT_MSP430FG478,
	DT_MSP430FG479,
	DT_MSP430F477,
	DT_MSP430F478,
	DT_MSP430F479,
	DT_MSP430F47197,
	DT_MSP430F47187,
	DT_MSP430F47177,
	DT_MSP430F47167,
	DT_MSP430F47196,
	DT_MSP430F47186,
	DT_MSP430F47176,
	DT_MSP430F47166,
	DT_MSP430F4152,
	DT_MSP430F4132,
	DT_CC430F6137,
	DT_CC430F6135,
	DT_CC430F6127,
	DT_CC430F6126,
	DT_CC430F6125,
	DT_CC430F5137,
	DT_CC430F5135,
	DT_CC430F5133,
	DT_MSP430F5513,
	DT_MSP430F5514,
	DT_MSP430F5515,
	DT_MSP430F5517,
	DT_MSP430F5519,
	DT_MSP430F5521,
	DT_MSP430F5522,
	DT_MSP430F5524,
	DT_MSP430F5525,
	DT_MSP430F5526,
	DT_MSP430F5527,
	DT_MSP430F5528,
	DT_MSP430F5529,
	DT_MSP430F5438A,
	DT_MSP430F5436A,
	DT_MSP430F5419A,
	DT_MSP430F5437A,
	DT_MSP430F5435A,
	DT_MSP430F5418A,
	DT_MSP430F5510,
	DT_MSP430F5131,
	DT_MSP430F5132,
	DT_MSP430F5151,
	DT_MSP430F5152,
	DT_MSP430F5171,
	DT_MSP430F5172,
	DT_MSP430F5630,
	DT_MSP430F5631,
	DT_MSP430F5632,
	DT_MSP430F5633,
	DT_MSP430F5634,
	DT_MSP430F5635,
	DT_MSP430F5636,
	DT_MSP430F5637,
	DT_MSP430F5638,
	DT_MSP430F6630,
	DT_MSP430F6631,
	DT_MSP430F6632,
	DT_MSP430F6633,
	DT_MSP430F6634,
	DT_MSP430F6635,
	DT_MSP430F6636,
	DT_MSP430F6637,
	DT_MSP430F6638,
	DT_MSP430FR5739,
	DT_MSP430L092,
	DT_MSP430F6700,
	DT_MSP430F6701,
	DT_MSP430F6702,
	DT_MSP430F6703,
	DT_MSP430F6720,
	DT_MSP430F6721,
	DT_MSP430F6722,
	DT_MSP430F6723,
	DT_MSP430F6730,
	DT_MSP430F6731,
	DT_MSP430F6732,
	DT_MSP430F6733,
	DT_MSP430F5509,
	DT_MSP430F5508,
	DT_MSP430F5507,
	DT_MSP430F5506,
	DT_MSP430F5505,
	DT_MSP430F5504,
	DT_MSP430F5503,
	DT_MSP430F5502,
	DT_MSP430F5501,
	DT_MSP430F5500,
	DT_MSP430F12x2New,
	DT_MSP430F5310,
	DT_MSP430F5309,
	DT_MSP430F5308,
	DT_MSP430F5304,
	DT_MSP430AFE253,
	DT_MSP430F5329,
	DT_MSP430F5328,
	DT_MSP430F5327,
	DT_MSP430F5326,
	DT_MSP430F5325,
	DT_MSP430F5324,
	DT_MSP430G2452,
	DT_MSP430F5342,
	DT_MSP430F5341,
	DT_MSP430F5340,
	DT_MSP430FW429,
	DT_MSP430F6659,
	DT_MSP430F6658,
	DT_MSP430F6459,
	DT_MSP430F6458,
	DT_MSP430F6457,
	DT_MSP430F5659,
	DT_MSP430F5658,
	DT_MSP430F5359,
	DT_MSP430F5358,
	DT_MSP430F5357,
	DT_MSP430G2553,
	DT_MSP430AFE233,
	DT_MSP430AFE223,
	DT_MSP430AFE252,
	DT_MSP430AFE232,
	DT_MSP430AFE222,
	DT_MSP430AFE251,
	DT_MSP430AFE231,
	DT_MSP430AFE221,
	DT_MSP430AFE250,
	DT_MSP430AFE230,
	DT_MSP430AFE220,
	DT_MSP430F5229,
	DT_MSP430FR5738,
	DT_MSP430FR5735,
	DT_MSP430FR5730,
	DT_MSP430FR5729,
	DT_MSP430FR5728,
	DT_MSP430FR5725,
	DT_MSP430FR5720,
	DT_MSP430FR5969,
	DT_CC430F6147,
	DT_CC430F6145,
	DT_CC430F6143,
	DT_CC430F5147,
	DT_CC430F5145,
	DT_CC430F5143,
	DT_CC430F5125,
	DT_CC430F5123,
	DT_MSP430F6724,
	DT_MSP430F6725,
	DT_MSP430F6726,
	DT_MSP430F6734,
	DT_MSP430F6735,
	DT_MSP430F6736,
	DT_MSP430F5333,
	DT_MSP430F5335,
	DT_MSP430F5336,
	DT_MSP430F5338,
	DT_MSP430F6433,
	DT_MSP430F6435,
	DT_MSP430F6436,
	DT_MSP430F6438,
	DT_MSP430FR5737,
	DT_MSP430FR5736,
	DT_MSP430FR5734,
	DT_MSP430FR5733,
	DT_MSP430FR5732,
	DT_MSP430FR5731,
	DT_MSP430FR5727,
	DT_MSP430FR5726,
	DT_MSP430FR5724,
	DT_MSP430FR5723,
	DT_MSP430FR5722,
	DT_MSP430FR5721,
	DT_MSP430F5228,
	DT_MSP430F5227,
	DT_MSP430F5224,
	DT_MSP430F5223,
	DT_MSP430F5222,
	DT_MSP430F5219,
	DT_MSP430F5218,
	DT_MSP430F5217,
	DT_MSP430F5214,
	DT_MSP430F5213,
	DT_MSP430F5212,
	DT_MSP430G2955,
	DT_MSP430F5255,
	DT_MSP430FR5947,
	DT_MSP430FR5948,
	DT_MSP430FR5949,
	DT_MSP430FR5957,
	DT_MSP430FR5958,
	DT_MSP430FR5959,
	DT_MSP430FR5967,
	DT_MSP430FR5968,
	DT_MSP430FR5994,
	DT_MSP430FR5964
} devicetype_t;

/* Mapping between device types and identification bytes. */
extern const struct device_table sdeviceID[];

#endif
