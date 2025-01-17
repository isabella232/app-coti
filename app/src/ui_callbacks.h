#pragma once

#include "shared_context.h"
#include <ux.h>

unsigned int io_seproxyhal_touch_tx_ok(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_tx_cancel(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_address_ok(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_address_cancel(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_sign_message_ok(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_sign_message_cancel(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_data_ok(const bagl_element_t *e);
unsigned int io_seproxyhal_touch_data_cancel(const bagl_element_t *e);

void ui_idle(void);

void format_signature_out(const uint8_t *signature);
