#pragma once

#include <memory>
#include <string>

class ChatMediator {
   public:
    virtual void sendMessage(const std::string& message,
                             class User* sender) = 0;
    virtual void addUser(std::shared_ptr<User> user) = 0;
    virtual ~ChatMediator() = default;
};