#include <iostream>
#include <string>


class House{
    private:
    float price;
    protected:
    int rooms;
    public:
    std::string address;

    void setDetails (float p, int r, std::string a){
    price= p;
    rooms =r;
    address = a;
    }
    float getPrice(){
        return price;
    }
};

int main(){
    House h1;
    h1.address ="789 Sunset Blvd";
    float price1;
    h1.setDetails(100.5, 3, "18 Bulevardi");
    price1= h1.getPrice();
    std::cout<<price1;
   
    return 0;
}