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

#include "py_engine.h"

namespace engine {

void PyEngine::initialize(pybind11::handle& m) {
  pybind11::class_<PyEngine, std::shared_ptr<PyEngine>>(m, "PyEngine")
      .def(pybind11::init<>())
      .def("start", &PyEngine::start)
      .def("stop", &PyEngine::stop)
      .def("close", &PyEngine::close);
}

}  // namespace engine