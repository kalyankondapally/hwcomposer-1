/*
// Copyright (c) 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#ifndef PLATFORM_DEFINES_
#define PLATFORM_DEFINES_

#include <cutils/log.h>
#include <hardware/hardware.h>
#include <hardware/hwcomposer.h>

#ifdef _cplusplus
extern "C" {
#endif

//#define ENABLE_DEBUG 1

typedef buffer_handle_t HWCNativeHandle;

#ifdef ENABLE_DEBUG
#define VTRACE(fmt, ...) ALOGV("%s: " fmt, __func__, ##__VA_ARGS__)
#define DTRACE(fmt, ...) ALOGD("%s: " fmt, __func__, ##__VA_ARGS__)
#define ITRACE(fmt, ...) ALOGI(fmt, __func__, ##__VA_ARGS__)
#define WTRACE(fmt, ...) ALOGW("%s: " fmt, __func__, ##__VA_ARGS__)
#else
#define VTRACE(fmt, ...) ((void)0)
#define DTRACE(fmt, ...) ((void)0)
#define ITRACE(fmt, ...) ((void)0)
#define WTRACE(fmt, ...) ((void)0)
#endif

#define ETRACE(fmt, ...) ALOGE("%s: " fmt, __func__, ##__VA_ARGS__)

// _cplusplus
#ifdef _cplusplus
}
#endif

#endif  // PLATFORM_DEFINES_
