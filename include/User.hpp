#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "ChatMediator.hpp"

class User {
   protected:
    std::string name;
    std::shared_ptr<ChatMediator> mediator;

   public:
    User(const std::string& name, std::shared_ptr<ChatMediator> mediator)
        : name(name), mediator(mediator) {}

    virtual void send(const std::string& message) {
        std::cout << name << " sends: " << message << std::endl;
        mediator->sendMessage(message, this);
    }

    virtual void receive(const std::string& message) {
        std::cout << name << " receives: " << message << std::endl;
    }

    std::string getName() const { return name; }
};