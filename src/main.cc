#include "ChatRoom.hpp"

int main() {
    // 중재자 객체 생성
    auto chatRoom = std::make_shared<ChatRoom>();

    // 사용자 추가
    auto user1 = std::make_shared<User>("Alice", chatRoom);
    auto user2 = std::make_shared<User>("Bob", chatRoom);
    auto user3 = std::make_shared<User>("Charlie", chatRoom);

    chatRoom->addUser(user1);
    chatRoom->addUser(user2);
    chatRoom->addUser(user3);

    // 메시지 전송
    user1->send("Hello, everyone!");
    user2->send("Hey Alice!");
    user3->send("Good morning!");

    return 0;
}