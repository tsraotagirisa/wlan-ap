/*
 * Copyright (c) 2016-2017, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


/**
 * @defgroup
 * @{
 */
#ifndef HPPE_STP_REG_H
#define HPPE_STP_REG_H

/*[register] CST_STATE*/
#define CST_STATE
#define CST_STATE_ADDRESS 0x100
#define CST_STATE_NUM     8
#define CST_STATE_INC     0x4
#define CST_STATE_TYPE    REG_TYPE_RW
#define CST_STATE_DEFAULT 0x3
	/*[field] PORT_STATE*/
	#define CST_STATE_PORT_STATE
	#define CST_STATE_PORT_STATE_OFFSET  0
	#define CST_STATE_PORT_STATE_LEN     2
	#define CST_STATE_PORT_STATE_DEFAULT 0x3

struct cst_state {
	a_uint32_t  port_state:2;
	a_uint32_t  _reserved0:30;
};

union cst_state_u {
	a_uint32_t val;
	struct cst_state bf;
};

#endif
