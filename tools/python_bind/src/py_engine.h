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

#ifndef TOOLS_PYTHON_BIND_SRC_PY_DATABASE_H_
#define TOOLS_PYTHON_BIND_SRC_PY_DATABASE_H_

#include <memory>
#include "third_party/pybind11/include/pybind11/pybind11.h"

#include "src/engine.h"

namespace engine {

class PyEngine : public std::enable_shared_from_this<PyEngine> {
 public:
  static void initialize(pybind11::handle& m);

  explicit PyEngine() { engine_ = std::make_unique<Engine>(); }

  ~PyEngine() { close(); }

  void start() {
    if (engine_) {
      engine_->start();
    }
  }

  void stop() {
    if (engine_) {
      engine_->stop();
    }
  }

  void close() {
    if (engine_) {
      engine_->close();
      engine_.reset();
    }
  }

 private:
  std::unique_ptr<Engine> engine_;
};

}  // namespace engine
#endif  // TOOLS_PYTHON_BIND_SRC_PY_DATABASE_H_