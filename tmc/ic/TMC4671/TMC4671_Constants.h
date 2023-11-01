/*******************************************************************************
* Copyright © 2018 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved. This software is
* proprietary & confidential to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC_IC_TMC4671_TMC4671_CONSTANTS_H_
#define TMC_IC_TMC4671_TMC4671_CONSTANTS_H_

#include "tmc/helpers/Constants.h"

#define TMC4671_MOTORS 1

#define TMC4671_STATUS_FLAGS_REF_MASK   0x00700000
#define TMC4671_STATUS_FLAGS_REF_SHIFT  20

// Buffer size for uint8_t buffer
// kfbtodo: Don't need this if you revert the change to readWriteByte()
#define TMC_4671_SPI_BUF_SIZE 5

#endif /* TMC_IC_TMC4671_TMC4671_CONSTANTS_H_ */
