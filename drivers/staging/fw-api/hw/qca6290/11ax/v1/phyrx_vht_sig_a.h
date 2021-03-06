/*
 * Copyright (c) 2016-2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _PHYRX_VHT_SIG_A_H_
#define _PHYRX_VHT_SIG_A_H_
#if !defined(__ASSEMBLER__)
#endif

#include "vht_sig_a_info.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-1	struct vht_sig_a_info phyrx_vht_sig_a_info_details;
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_PHYRX_VHT_SIG_A 2

struct phyrx_vht_sig_a {
    struct            vht_sig_a_info                       phyrx_vht_sig_a_info_details;
};

/*

struct vht_sig_a_info phyrx_vht_sig_a_info_details
			
			See detailed description of the STRUCT
*/

#define PHYRX_VHT_SIG_A_0_VHT_SIG_A_INFO_PHYRX_VHT_SIG_A_INFO_DETAILS_OFFSET 0x00000000
#define PHYRX_VHT_SIG_A_0_VHT_SIG_A_INFO_PHYRX_VHT_SIG_A_INFO_DETAILS_LSB 0
#define PHYRX_VHT_SIG_A_0_VHT_SIG_A_INFO_PHYRX_VHT_SIG_A_INFO_DETAILS_MASK 0xffffffff
#define PHYRX_VHT_SIG_A_1_VHT_SIG_A_INFO_PHYRX_VHT_SIG_A_INFO_DETAILS_OFFSET 0x00000004
#define PHYRX_VHT_SIG_A_1_VHT_SIG_A_INFO_PHYRX_VHT_SIG_A_INFO_DETAILS_LSB 0
#define PHYRX_VHT_SIG_A_1_VHT_SIG_A_INFO_PHYRX_VHT_SIG_A_INFO_DETAILS_MASK 0xffffffff


#endif // _PHYRX_VHT_SIG_A_H_
