// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#include <atomic>
#include <cstdint>
#include <cstring>
#include <deque>
#include <functional>
#include <memory>
#include <random>
#include <thread>
#include "gtest/gtest.h"
#include "core/faster.h"
#include "core/light_epoch.h"
#include "core/thread.h"
#include "device/file_system_disk.h"

using namespace FASTER::core;

typedef FASTER::environment::ThreadPoolIoHandler handler_t;

#define CLASS RecoveryTest_ThreadPool

#include "recovery_test.h"

#undef CLASS

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  if (ret == 0) {
    RemoveDir(ROOT_PATH);
  }
  return ret;
}