#pragma once

#include "shared_context.h"

#define CLA 0xE0
#define INS_GET_PUBLIC_KEY 0x02
#define INS_SIGN_MESSAGE 0x04

#define P1_CONFIRM 0x01
#define P1_NON_CONFIRM 0x00
#define P1_FIRST 0x00
#define P1_MORE 0x80

#define COMMON_CLA 0xB0

#define OFFSET_CLA 0
#define OFFSET_INS 1
#define OFFSET_P1 2
#define OFFSET_P2 3
#define OFFSET_LC 4
#define OFFSET_CDATA 5

void handle_get_public_key(uint8_t p1, uint8_t p2, uint8_t *dataBuffer, uint16_t data_length, unsigned int *flags, unsigned int *tx);
void handle_sign_message(uint8_t p1, uint8_t p2, uint8_t *dataBuffer, uint16_t data_length, unsigned int *flags, unsigned int *tx);