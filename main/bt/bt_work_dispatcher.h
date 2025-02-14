// -----------------------------------------------------------------------------------
// Copyright 2024, Gilles Zunino
// -----------------------------------------------------------------------------------

#pragma once

#include <esp_err.h>


typedef void (* bluetooth_workitem_handler) (uint16_t event, void* param);


bool queue_bluetooth_workitem(bluetooth_workitem_handler handler, uint16_t eventId, const void* const params, size_t paramsLen);

esp_err_t start_bluetooth_dispatcher_task();
esp_err_t stop_bluetooth_dispatcher_task();