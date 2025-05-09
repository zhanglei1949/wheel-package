#ifndef SRC_ENGINE_H_
#define SRC_ENGINE_H_

namespace engine {
class Engine {
 public:
  Engine();
  ~Engine();

  void start();
  void stop();
  void close();
};
}  // namespace engine

#endif  // SRC_ENGINE_H_
