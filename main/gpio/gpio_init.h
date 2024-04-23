// -----------------------------------------------------------------------------------
// Copyright 2024, Gilles Zunino
// -----------------------------------------------------------------------------------

#pragma once

#include <driver/gpio.h>


typedef void (*isr_handler_fn_ptr)(void);

esp_err_t ht_gpio_isr_handler_add(gpio_num_t gpio_num, isr_handler_fn_ptr fn);
esp_err_t ht_gpio_isr_handler_delete(gpio_num_t gpio_num);

esp_err_t configure_gpio_isr_dispatcher(void);