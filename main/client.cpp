#include "game_manager.h"

#include "const.h"

int main() {
  client::GameManager player;

  player.Init();

  player.Update();

  //Odl Piece Of Crap
//  std::vector<std::string> receivedMessages;
//
//  sf::TcpSocket socket;
//  socket.setBlocking(false);
//  std::string serverAddress = "localhost";
//  serverAddress.resize(50, 0);
//  short portNumber = PORT_NUMBER;
//  std::string sendMessage;
//  sendMessage.resize(MAX_MESSAGE_LENGTH, 0);
//  std::string receivedMessage;
//  receivedMessage.resize(MAX_MESSAGE_LENGTH, 0);
//
//  while (isOpen) {
//    while (const std::optional event = window.pollEvent()) {
//      ImGui::SFML::ProcessEvent(window, *event);
//      if (event->is<sf::Event::Closed>()) {
//        isOpen = false;
//      }
//    }
//    if (status == Status::CONNECTED) {
//      size_t actuallyReceived;
//      const auto receivedStatus = socket.receive(receivedMessage.data(), MAX_MESSAGE_LENGTH, actuallyReceived);
//      if (receivedStatus == sf::Socket::Status::Done) {
//        receivedMessages.push_back(receivedMessage);
//      }
//      if (socket.getLocalPort() == 0) {
//        status = Status::NOT_CONNECTED;
//      }
//
//    }
//
//    switch (status) {
//      case Status::NOT_CONNECTED: {
//        ImGui::InputText("Host Address", serverAddress.data(), serverAddress.size());
//        ImGui::SameLine();
//        ImGui::Text("%hd", portNumber);
//        if (ImGui::Button("Connect")) {
//          if (auto address = sf::IpAddress::resolve(serverAddress)) {
//            socket.setBlocking(true);
//            const auto connectionStatus = socket.connect(address.value(), portNumber);
//            switch (connectionStatus) {
//              case sf::Socket::Status::Done: status = Status::CONNECTED;
//                break;
//              case sf::Socket::Status::NotReady: std::cerr << "Socket not ready\n";
//                break;
//              case sf::Socket::Status::Partial: std::cerr << "Partial\n";
//                break;
//              case sf::Socket::Status::Disconnected: std::cerr << "Socket disconnected\n";
//                break;
//              case sf::Socket::Status::Error: std::cerr << "Socket error\n";
//                break;
//            }
//            socket.setBlocking(false);
//          }
//        }
//        break;
//      }
//      case Status::CONNECTED: {
//        ImGui::InputText("Message", sendMessage.data(), MAX_MESSAGE_LENGTH);
//        if (ImGui::Button("Send")) {
//          size_t dataSent;
//          sf::TcpSocket::Status sendStatus;
//          do {
//            sendStatus = socket.send(sendMessage.data(), MAX_MESSAGE_LENGTH, dataSent);
//          } while (sendStatus == sf::Socket::Status::Partial);
//        }
//        for (const auto &message : receivedMessages) {
//          ImGui::Text("Received message: %s", message.data());
//        }
//        break;
//      }
//    }
//  }
}