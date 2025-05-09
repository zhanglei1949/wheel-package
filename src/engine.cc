#include "src/engine.h"

#include <glog/logging.h>

namespace engine {
Engine::Engine() {
  // Constructor implementation
  LOG(INFO) << "Engine initialized.";
}
Engine::~Engine() {
  // Destructor implementation
  LOG(INFO) << "Engine destroyed.";
}

void Engine::start() {
  // Start engine implementation
  LOG(INFO) << "Engine started.";
}

void Engine::stop() {
  // Stop engine implementation
  LOG(INFO) << "Engine stopped.";
}

void Engine::close() {
  // Close engine implementation
  LOG(INFO) << "Engine closed.";
}

}  // namespace engine
