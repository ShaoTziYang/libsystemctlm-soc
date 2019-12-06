/*
 * Register definitions for the AXI Master HW bridge.
 *
 * Copyright (c) 2019 Xilinx Inc.
 * Written by Alok Mistry and Edgar E. Iglesias.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef SRC_USER_MASTER_ADDR_H_
#define SRC_USER_MASTER_ADDR_H_

#define USR_MASTER_BASE_ADDR (0)

#define BRIDGE_IDENTIFICATION_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x0
#define BRIDGE_POSITION_REG_ADDR_MASTER     USR_MASTER_BASE_ADDR + 0x4

#define VERSION_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x20
#define BRIDGE_TYPE_REG_ADDR_MASTER         USR_MASTER_BASE_ADDR + 0x24
#define MODE_SELECT_REG_ADDR_MASTER         USR_MASTER_BASE_ADDR + 0x38
#define RESET_REG_ADDR_MASTER               USR_MASTER_BASE_ADDR + 0x3C


#define H2C_INTR_0_REG_ADDR_MASTER          USR_MASTER_BASE_ADDR + 0x40
#define H2C_INTR_1_REG_ADDR_MASTER          USR_MASTER_BASE_ADDR + 0x44
#define H2C_INTR_2_REG_ADDR_MASTER          USR_MASTER_BASE_ADDR + 0x48
#define H2C_INTR_3_REG_ADDR_MASTER          USR_MASTER_BASE_ADDR + 0x4C

#define C2H_INTR_STATUS_0_REG_ADDR_MASTER          USR_MASTER_BASE_ADDR + 0x60
#define INTR_C2H_TOGGLE_STATUS_0_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x64
#define INTR_C2H_TOGGLE_CLEAR_0_REG_ADDR_MASTER    USR_MASTER_BASE_ADDR + 0x68
#define INTR_C2H_TOGGLE_ENABLE_0_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x6C

#define C2H_INTR_STATUS_1_REG_ADDR_MASTER          USR_MASTER_BASE_ADDR + 0x70
#define INTR_C2H_TOGGLE_STATUS_1_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x74
#define INTR_C2H_TOGGLE_CLEAR_1_REG_ADDR_MASTER    USR_MASTER_BASE_ADDR + 0x78
#define INTR_C2H_TOGGLE_ENABLE_1_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x7C

#define C2H_GPIO_0_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x80
#define C2H_GPIO_1_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x84
#define C2H_GPIO_2_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x88
#define C2H_GPIO_3_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x8C
#define C2H_GPIO_4_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x90
#define C2H_GPIO_5_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x94
#define C2H_GPIO_6_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x98
#define C2H_GPIO_7_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x9C
#define C2H_GPIO_8_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xA0
#define C2H_GPIO_9_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xA4
#define C2H_GPIO_10_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xA8
#define C2H_GPIO_11_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xAC
#define C2H_GPIO_12_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xB0
#define C2H_GPIO_13_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xB4
#define C2H_GPIO_14_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xB8
#define C2H_GPIO_15_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xBC


#define H2C_GPIO_0_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xC0
#define H2C_GPIO_1_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xC4
#define H2C_GPIO_2_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xC8
#define H2C_GPIO_3_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xCC
#define H2C_GPIO_4_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xD0
#define H2C_GPIO_5_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xD4
#define H2C_GPIO_6_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xD8
#define H2C_GPIO_7_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xDC
#define H2C_GPIO_8_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xE0
#define H2C_GPIO_9_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0xE4
#define H2C_GPIO_10_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xE8
#define H2C_GPIO_11_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xEC
#define H2C_GPIO_12_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xF0
#define H2C_GPIO_13_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xF4
#define H2C_GPIO_14_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xF8
#define H2C_GPIO_15_REG_ADDR_MASTER  USR_MASTER_BASE_ADDR + 0xFC

#define AXI_BRIDGE_CONFIG_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x200
#define AXI_MAX_DESC_REG_ADDR_MASTER        USR_MASTER_BASE_ADDR + 0x204
#define INTR_STATUS_REG_ADDR_MASTER         USR_MASTER_BASE_ADDR + 0x208
#define INTR_ERROR_STATUS_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x20C
#define INTR_ERROR_CLEAR_REG_ADDR_MASTER    USR_MASTER_BASE_ADDR + 0x210
#define INTR_ERROR_ENABLE_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x214
#define BRIDGE_RD_USER_CONFIG_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x218
#define BRIDGE_WR_USER_CONFIG_REG_ADDR_MASTER   USR_MASTER_BASE_ADDR + 0x21C

#define ADDR_IN_0_REG_ADDR_MASTER                USR_MASTER_BASE_ADDR + 0x218
#define ADDR_IN_1_REG_ADDR_MASTER                USR_MASTER_BASE_ADDR + 0x21C
#define ADDR_IN_2_REG_ADDR_MASTER                USR_MASTER_BASE_ADDR + 0x220
#define ADDR_IN_3_REG_ADDR_MASTER                USR_MASTER_BASE_ADDR + 0x224
#define TRANS_MASK_0_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x228
#define TRANS_MASK_1_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x22C
#define TRANS_MASK_2_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x230
#define TRANS_MASK_3_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x234
#define TRANS_ADDR_0_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x238
#define TRANS_ADDR_1_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x23C
#define TRANS_ADDR_2_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x240
#define TRANS_ADDR_3_REG_ADDR_MASTER             USR_MASTER_BASE_ADDR + 0x244

#define OWNERSHIP_REG_ADDR_MASTER           USR_MASTER_BASE_ADDR + 0x300
#define OWNERSHIP_FLIP_REG_ADDR_MASTER      USR_MASTER_BASE_ADDR + 0x304
#define STATUS_RESP_REG_ADDR_MASTER         USR_MASTER_BASE_ADDR + 0x308
#define INTR_COMP_STATUS_REG_ADDR_MASTER    USR_MASTER_BASE_ADDR + 0x30C
#define INTR_COMP_CLEAR_REG_ADDR_MASTER     USR_MASTER_BASE_ADDR + 0x310
#define INTR_COMP_ENABLE_REG_ADDR_MASTER    USR_MASTER_BASE_ADDR + 0x314
#define STATUS_RESP_COMP_REG_ADDR_MASTER         USR_MASTER_BASE_ADDR + 0x318
#define STATUS_BUSY_REG_ADDR_MASTER              USR_MASTER_BASE_ADDR + 0x31C

#define DESC_0_BASE_ADDR_MASTER   0x0

#define DESC_0_TXN_TYPE_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x00
#define DESC_0_SIZE_REG_ADDR_MASTER                 DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x04
#define DESC_0_DATA_OFFSET_REG_ADDR_MASTER          DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x08
#define DESC_0_DATA_HOST_ADDR_0_REG_ADDR_MASTER     DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x10
#define DESC_0_DATA_HOST_ADDR_1_REG_ADDR_MASTER     DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x14
#define DESC_0_DATA_HOST_ADDR_2_REG_ADDR_MASTER     DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x18
#define DESC_0_DATA_HOST_ADDR_3_REG_ADDR_MASTER     DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x1C
#define DESC_0_WSTRB_HOST_ADDR_0_REG_ADDR_MASTER    DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x20
#define DESC_0_WSTRB_HOST_ADDR_1_REG_ADDR_MASTER    DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x24
#define DESC_0_WSTRB_HOST_ADDR_2_REG_ADDR_MASTER    DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x28
#define DESC_0_WSTRB_HOST_ADDR_3_REG_ADDR_MASTER    DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x2C
#define DESC_0_AXSIZE_REG_ADDR_MASTER               DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x30
#define DESC_0_ATTR_REG_ADDR_MASTER                 DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x34
#define DESC_0_AXADDR_0_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x40
#define DESC_0_AXADDR_1_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x44
#define DESC_0_AXADDR_2_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x48
#define DESC_0_AXADDR_3_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x4C
#define DESC_0_AXID_0_REG_ADDR_MASTER               DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x50
#define DESC_0_AXID_1_REG_ADDR_MASTER               DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x54
#define DESC_0_AXID_2_REG_ADDR_MASTER               DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x58
#define DESC_0_AXID_3_REG_ADDR_MASTER               DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x5C
#define DESC_0_AXUSER_0_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x60
#define DESC_0_AXUSER_1_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x64
#define DESC_0_AXUSER_2_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x68
#define DESC_0_AXUSER_3_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x6C
#define DESC_0_AXUSER_4_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x70
#define DESC_0_AXUSER_5_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x74
#define DESC_0_AXUSER_6_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x78
#define DESC_0_AXUSER_7_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x7C
#define DESC_0_AXUSER_8_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x80
#define DESC_0_AXUSER_9_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x84
#define DESC_0_AXUSER_10_REG_ADDR_MASTER            DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x88
#define DESC_0_AXUSER_11_REG_ADDR_MASTER            DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x8C
#define DESC_0_AXUSER_12_REG_ADDR_MASTER            DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x90
#define DESC_0_AXUSER_13_REG_ADDR_MASTER            DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x94
#define DESC_0_AXUSER_14_REG_ADDR_MASTER            DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x98
#define DESC_0_AXUSER_15_REG_ADDR_MASTER            DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x9C
#define DESC_0_XUSER_0_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xA0
#define DESC_0_XUSER_1_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xA4
#define DESC_0_XUSER_2_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xA8
#define DESC_0_XUSER_3_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xAC
#define DESC_0_XUSER_4_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xB0
#define DESC_0_XUSER_5_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xB4
#define DESC_0_XUSER_6_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xB8
#define DESC_0_XUSER_7_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xBC
#define DESC_0_XUSER_8_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xC0
#define DESC_0_XUSER_9_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xC4
#define DESC_0_XUSER_10_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xC8
#define DESC_0_XUSER_11_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xCC
#define DESC_0_XUSER_12_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xD0
#define DESC_0_XUSER_13_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xD4
#define DESC_0_XUSER_14_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xD8
#define DESC_0_XUSER_15_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xDC
#define DESC_0_WUSER_0_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xE0
#define DESC_0_WUSER_1_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xE4
#define DESC_0_WUSER_2_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xE8
#define DESC_0_WUSER_3_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xEC
#define DESC_0_WUSER_4_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xF0
#define DESC_0_WUSER_5_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xF4
#define DESC_0_WUSER_6_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xF8
#define DESC_0_WUSER_7_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0xFC
#define DESC_0_WUSER_8_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x100
#define DESC_0_WUSER_9_REG_ADDR_MASTER              DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x104
#define DESC_0_WUSER_10_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x108
#define DESC_0_WUSER_11_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x10C
#define DESC_0_WUSER_12_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x110
#define DESC_0_WUSER_13_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x114
#define DESC_0_WUSER_14_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x118
#define DESC_0_WUSER_15_REG_ADDR_MASTER             DESC_0_BASE_ADDR_MASTER + USR_MASTER_BASE_ADDR + 0x11C

#define DESC_1_BASE_ADDR_MASTER   0x3200
#define DRAM_OFFSET_WRITE_MASTER USR_MASTER_BASE_ADDR+0xC000
#define DRAM_OFFSET_READ_MASTER USR_MASTER_BASE_ADDR+0x8000
#define DRAM_OFFSET_WSTRB_MASTER USR_MASTER_BASE_ADDR + 0x10000

#endif /* SRC_USER_MASTER_ADDR_H_ */