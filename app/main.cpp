#include "app_misc.h"
#include "app_ble.h"

#include "nrf.h"

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform/Atomic.h"

/**@brief Function for application main entry.
 */
int main(void)
{
    bool erase_bonds;

    // Initialize.
    log_init();
    timers_init();
    power_management_init();
    ble_stack_init();
    gap_params_init();
    gatt_init();
    advertising_init();
    services_init();
    conn_params_init();
    peer_manager_init();

    // Start execution.
    NRF_LOG_INFO("Template example started.");
    application_timers_start();

    advertising_start(erase_bonds);

    // Enter main loop.
    for (;;)
    {
        idle_state_handle();
        NRF_LOG_RAW_INFO(".");
        volatile int asd;
        for(int i= 0; i< 1000000; i++)
        	asd = 0;
    }
}


/**
 * @}
 */
