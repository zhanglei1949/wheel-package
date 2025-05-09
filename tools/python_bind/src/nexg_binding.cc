/** Copyright 2020 Alibaba Group Holding Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * 	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <pybind11/pybind11.h>
#include <string>

#include "py_engine.h"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(wheel_bind, m) {
  m.doc() = R"pbdoc(
        
        -----------------------
        GraphScope wheel_bind, a high performence embedded graph database.
        .. currentmodule:: wheel_bind

        .. autosummary::
           :toctree: _generate

    )pbdoc";

  m.attr("__version__") = MACRO_STRINGIFY(WHEEL_TEST_VERSION);
  engine::PyEngine::initialize(m);
}
