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

#ifndef GPU_DEVICE_H_
#define GPU_DEVICE_H_

#ifdef UDEV_SUPPORT
#include <libudev.h>
#endif
#include <vector>

#include <drmscopedtypes.h>
#include <scopedfd.h>

namespace hwcomposer {

class DisplayPlaneManager;
class DisplayPlane;
class Headless;
class NativeBufferHandler;
class NativeDisplay;

class GpuDevice {
 public:
  GpuDevice();

  virtual ~GpuDevice();

  // Open device.
  bool Initialize();

  NativeDisplay* GetDisplay(uint32_t display);

  NativeDisplay* GetVirtualDisplay();

 private:
  class DisplayManager;
  std::unique_ptr<DisplayManager> display_manager_;
  ScopedFd fd_;
  bool initialized_;
};

}  // namespace hwcomposer
#endif  // GPU_DEVICE_H_
