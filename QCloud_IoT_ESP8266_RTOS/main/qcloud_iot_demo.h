/*
 * Tencent is pleased to support the open source community by making IoT Hub available.
 * Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

 * Licensed under the MIT License (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT

 * Unless required by applicable law or agreed to in writing, software distributed under the License is
 * distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef QCLOUD_IOT_DEMO_H_
#define QCLOUD_IOT_DEMO_H_
#if defined(__cplusplus)
extern "C" {
#endif

#include "sdkconfig.h"

/* WiFi router SSID  */
#define TEST_WIFI_SSID                 CONFIG_DEMO_WIFI_SSID
/* WiFi router password */
#define TEST_WIFI_PASSWORD             CONFIG_DEMO_WIFI_PASSWORD

/* Product Id */
#define QCLOUD_IOT_PRODUCT_ID          CONFIG_QCLOUD_IOT_PRODUCT_ID
/* Device Name */
#define QCLOUD_IOT_DEVICE_NAME         CONFIG_QCLOUD_IOT_DEVICE_NAME
/* Device Secret */
#define QCLOUD_IOT_DEVICE_SECRET       CONFIG_QCLOUD_IOT_DEVICE_SECRET



int qcloud_iot_explorer_demo(void);

int qcloud_iot_hub_demo(void);




#if defined(__cplusplus)
}
#endif
#endif  /* QCLOUD_IOT_DEMO_H_ */

