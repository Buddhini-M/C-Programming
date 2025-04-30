#include <iostream>
#include <string>

class House{
    public:
    std::string address;
    int rooms;

    House(std::string addr,int rm){
        address= addr;
        rooms= rm;
    }

    void display(){
        std::cout<<"Address: " << address <<", Rooms: " << rooms << std::endl;
    }
};

int main(){
    House*h1= new House("123 El st", 3);

    h1->display();

    delete h1;
    h1= nullptr;
    return 0;
}