/* Copyright 2017 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

extern "C" {
#include "cras_server_metrics.h"

int cras_server_metrics_highest_hw_level(unsigned hw_level,
                                         enum CRAS_STREAM_DIRECTION direction)
{
  return 0;
}

int cras_server_metrics_longest_fetch_delay(unsigned delay_msec)
{
  return 0;
}

int cras_server_metrics_num_underruns(unsigned num_underruns)
{
  return 0;
}

} // extern "C"