#include "display.h"
#include <SFML/Window/Event.hpp>


namespace client {

void Display::Init() {
  window_.create(sf::VideoMode({800, 600}), "My Window");
  window_.setFramerateLimit(60);
  ImGui::SFML::Init(window_);
  is_open_ = true;
}

void Display::BeginFrame() {
  while (std::optional event = window_.pollEvent()) {
    ImGui::SFML::ProcessEvent(window_, *event);
    if (event->is<sf::Event::Closed>())
    {
      is_open_ = false;
    }
  }

  ImGui::SFML::Update(window_, delta_clock_.restart());

  window_.clear(sf::Color::Black);
}

void Display::EndFrame() {
  ImGui::SFML::Render(window_);
  window_.display();
}

void Display::Close() {
  ImGui::SFML::Shutdown();
  window_.close();
  is_open_ = false;
}

sf::RenderWindow& Display::GetWindow() {
  return window_;
}

sf::Time Display::GetDeltaTime() const {
  return delta_clock_.getElapsedTime();
}

}
