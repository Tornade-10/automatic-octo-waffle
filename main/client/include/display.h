#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_DISPLAY_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_DISPLAY_H_

#include <SFML/Graphics/RenderWindow.hpp>
#include <imgui-SFML.h>
#include <imgui.h>
#include <SFML/System/Clock.hpp>
#include <iostream>

namespace client {

/**
 * Display window
 * Renderer (To render things)
 */
class Display {
 private:
  sf::RenderWindow window_;
  sf::Clock delta_clock_;
  bool is_open_ = true;

 public:
  void Init();
  void BeginFrame();
  void EndFrame();

  void Close();
  bool Opened() const { return is_open_; }

  sf::RenderWindow& GetWindow(); // expose window for drawing
  sf::Time GetDeltaTime() const; // optional for animations
};

} // namespace client

#endif // SIMPLECHAT_MAIN_CLIENT_INCLUDE_DISPLAY_H_
