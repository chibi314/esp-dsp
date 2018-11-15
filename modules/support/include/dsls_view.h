// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _dsls_view_H_
#define _dsls_view_H_

#include "dsl_err.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @function dsls_view
 * Generic view function.
 * This function takes input samples and show then in console view as a plot.
 * The main purpose to give and draft debug information to the DSP developer.
 *
 * @param data: array with input samples.
 * @param len: length of the input array
 * @param width: plot width in symbols
 * @param height: plot height in lines
 * @param min: minimum value that will be limited by Axis Y.
 * @param max: maximum value that will be limited by Axis Y.
 * @param view_char: character to draw the plot calues ('.' or '|' etc)
 *
 */

void dsls_view(float *data, int32_t len, int width, int height, float min, float max, char view_char);

/**
 * @function dsls_view_spectrum
 * The view function to show spectrum values  in 64x10 screen.
 * The function based on dsls_view.
 *
 * @param data: array with input samples.
 * @param len: length of the input array
 * @param min: minimum value that will be limited by Axis Y.
 * @param max: maximum value that will be limited by Axis Y.
 *
 */
void dsls_view_spectrum(float *data, int32_t len, float min, float max);

#ifdef __cplusplus
}
#endif

#endif // _dsls_view_H_