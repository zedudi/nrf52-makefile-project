/*
 * app_misc.h
 *
 *  Created on: 2020. nov. 6.
 *      Author: doodie
 */

#ifndef APP_APP_MISC_H_
#define APP_APP_MISC_H_

#include "app_timer.h"
#include "nrf.h"

#include "nrf_soc.h"
#include "nrf_pwr_mgmt.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#define DEAD_BEEF                       0xDEADBEEF                              /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

void timers_init(void);
void assert_nrf_callback(uint16_t line_num, const uint8_t * p_file_name);
void application_timers_start(void);
void sleep_mode_enter(void);
void log_init(void);
void power_management_init(void);
void idle_state_handle(void);

#endif /* APP_APP_MISC_H_ */
