#pragma once

#include <memory>
#include <string>
#include <vector>

#include "ChatMediator.hpp"
#include "User.hpp"

class ChatRoom : public ChatMediator {
   private:
    std::vector<std::shared_ptr<User>> users;

   public:
    void addUser(std::shared_ptr<User> user) override { users.push_back(user); }

    void sendMessage(const std::string& message, User* sender) override {
        for (auto& user : users) {
            if (user.get() != sender) {  // 자기 자신에게는 메시지를 보내지 않음
                user->receive(sender->getName() + ": " + message);
            }
        }
    }
};