#include "mini_uart.h"

void kernel_main(void) {
    uart_init();
    uart_send_string("Hello world!\r\n");

    for(;;) {
        uart_send(uart_recv());
    }
}