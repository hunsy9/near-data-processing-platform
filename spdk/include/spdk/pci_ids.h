/*   SPDX-License-Identifier: BSD-3-Clause
 *   Copyright (C) 2015 Intel Corporation.
 *   All rights reserved.
 */

/** \file
 * PCI device ID list
 */

#ifndef SPDK_PCI_IDS
#define SPDK_PCI_IDS

#include "spdk/stdinc.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SPDK_PCI_ANY_ID			0xffff
#define SPDK_PCI_VID_INTEL		0x8086
#define SPDK_PCI_VID_MEMBLAZE		0x1c5f
#define SPDK_PCI_VID_SAMSUNG		0x144d
#define SPDK_PCI_VID_VIRTUALBOX		0x80ee
#define SPDK_PCI_VID_VIRTIO		0x1af4
#define SPDK_PCI_VID_CNEXLABS		0x1d1d
#define SPDK_PCI_VID_VMWARE		0x15ad
#define SPDK_PCI_VID_REDHAT		0x1b36
#define SPDK_PCI_VID_NUTANIX		0x4e58
#define SPDK_PCI_VID_HUAWEI		0x19e5
#define SPDK_PCI_VID_MICROSOFT		0x1414

#define SPDK_PCI_CLASS_ANY_ID		0xffffff
/**
 * PCI class code for NVMe devices.
 *
 * Base class code 01h: mass storage
 * Subclass code 08h: non-volatile memory
 * Programming interface 02h: NVM Express
 */
#define SPDK_PCI_CLASS_NVME		0x010802

#define PCI_DEVICE_ID_INTEL_DSA		0x0b25
#define PCI_DEVICE_ID_INTEL_IAA		0x0cfe

#define PCI_DEVICE_ID_INTEL_IOAT_SNB0	0x3c20
#define PCI_DEVICE_ID_INTEL_IOAT_SNB1	0x3c21
#define PCI_DEVICE_ID_INTEL_IOAT_SNB2	0x3c22
#define PCI_DEVICE_ID_INTEL_IOAT_SNB3	0x3c23
#define PCI_DEVICE_ID_INTEL_IOAT_SNB4	0x3c24
#define PCI_DEVICE_ID_INTEL_IOAT_SNB5	0x3c25
#define PCI_DEVICE_ID_INTEL_IOAT_SNB6	0x3c26
#define PCI_DEVICE_ID_INTEL_IOAT_SNB7	0x3c27
#define PCI_DEVICE_ID_INTEL_IOAT_SNB8	0x3c2e
#define PCI_DEVICE_ID_INTEL_IOAT_SNB9	0x3c2f

#define PCI_DEVICE_ID_INTEL_IOAT_IVB0	0x0e20
#define PCI_DEVICE_ID_INTEL_IOAT_IVB1	0x0e21
#define PCI_DEVICE_ID_INTEL_IOAT_IVB2	0x0e22
#define PCI_DEVICE_ID_INTEL_IOAT_IVB3	0x0e23
#define PCI_DEVICE_ID_INTEL_IOAT_IVB4	0x0e24
#define PCI_DEVICE_ID_INTEL_IOAT_IVB5	0x0e25
#define PCI_DEVICE_ID_INTEL_IOAT_IVB6	0x0e26
#define PCI_DEVICE_ID_INTEL_IOAT_IVB7	0x0e27
#define PCI_DEVICE_ID_INTEL_IOAT_IVB8	0x0e2e
#define PCI_DEVICE_ID_INTEL_IOAT_IVB9	0x0e2f

#define PCI_DEVICE_ID_INTEL_IOAT_HSW0	0x2f20
#define PCI_DEVICE_ID_INTEL_IOAT_HSW1	0x2f21
#define PCI_DEVICE_ID_INTEL_IOAT_HSW2	0x2f22
#define PCI_DEVICE_ID_INTEL_IOAT_HSW3	0x2f23
#define PCI_DEVICE_ID_INTEL_IOAT_HSW4	0x2f24
#define PCI_DEVICE_ID_INTEL_IOAT_HSW5	0x2f25
#define PCI_DEVICE_ID_INTEL_IOAT_HSW6	0x2f26
#define PCI_DEVICE_ID_INTEL_IOAT_HSW7	0x2f27
#define PCI_DEVICE_ID_INTEL_IOAT_HSW8	0x2f2e
#define PCI_DEVICE_ID_INTEL_IOAT_HSW9	0x2f2f

#define PCI_DEVICE_ID_INTEL_IOAT_BWD0	0x0C50
#define PCI_DEVICE_ID_INTEL_IOAT_BWD1	0x0C51
#define PCI_DEVICE_ID_INTEL_IOAT_BWD2	0x0C52
#define PCI_DEVICE_ID_INTEL_IOAT_BWD3	0x0C53

#define PCI_DEVICE_ID_INTEL_IOAT_BDXDE0	0x6f50
#define PCI_DEVICE_ID_INTEL_IOAT_BDXDE1	0x6f51
#define PCI_DEVICE_ID_INTEL_IOAT_BDXDE2	0x6f52
#define PCI_DEVICE_ID_INTEL_IOAT_BDXDE3	0x6f53

#define PCI_DEVICE_ID_INTEL_IOAT_BDX0	0x6f20
#define PCI_DEVICE_ID_INTEL_IOAT_BDX1	0x6f21
#define PCI_DEVICE_ID_INTEL_IOAT_BDX2	0x6f22
#define PCI_DEVICE_ID_INTEL_IOAT_BDX3	0x6f23
#define PCI_DEVICE_ID_INTEL_IOAT_BDX4	0x6f24
#define PCI_DEVICE_ID_INTEL_IOAT_BDX5	0x6f25
#define PCI_DEVICE_ID_INTEL_IOAT_BDX6	0x6f26
#define PCI_DEVICE_ID_INTEL_IOAT_BDX7	0x6f27
#define PCI_DEVICE_ID_INTEL_IOAT_BDX8	0x6f2e
#define PCI_DEVICE_ID_INTEL_IOAT_BDX9	0x6f2f

#define PCI_DEVICE_ID_INTEL_IOAT_SKX	0x2021

#define PCI_DEVICE_ID_INTEL_IOAT_ICX	0x0b00

#define PCI_DEVICE_ID_VIRTIO_BLK_LEGACY	0x1001
#define PCI_DEVICE_ID_VIRTIO_SCSI_LEGACY 0x1004
#define PCI_DEVICE_ID_VIRTIO_BLK_MODERN	0x1042
#define PCI_DEVICE_ID_VIRTIO_SCSI_MODERN 0x1048

#define PCI_DEVICE_ID_VIRTIO_VHOST_USER 0x1017

#define PCI_DEVICE_ID_INTEL_VMD_SKX	0x201d
#define PCI_DEVICE_ID_INTEL_VMD_ICX	0x28c0

#define PCI_ROOT_PORT_A_INTEL_SKX	0x2030
#define PCI_ROOT_PORT_B_INTEL_SKX	0x2031
#define PCI_ROOT_PORT_C_INTEL_SKX	0x2032
#define PCI_ROOT_PORT_D_INTEL_SKX	0x2033
#define PCI_ROOT_PORT_A_INTEL_ICX	0x347a
#define PCI_ROOT_PORT_B_INTEL_ICX	0x347b
#define PCI_ROOT_PORT_C_INTEL_ICX	0x347c
#define PCI_ROOT_PORT_D_INTEL_ICX	0x347d



#ifdef __cplusplus
}
#endif

#endif /* SPDK_PCI_IDS */
