#include <string>
#include <iostream>
using namespace std;
class Smartphone{
public:
    int price;
    string model;
    string telephone_number;
    double battery_power;
    double memory_capacity;
    Smartphone(){}
    Smartphone (int Price, string Model, string Telephone_number, double Battery_power, double Memory_capacity)
    {
        price=Price;
        model=Model;
        telephone_number=Telephone_number;
        battery_power=Battery_power;
        memory_capacity=Memory_capacity;
    }
    void print_1()
    {
        cout << "\nprice is " << price << endl;
        cout << "    model is " << model << endl;
        cout << "    telephone number is " << telephone_number << endl;
        cout << "   Battery power is " << battery_power << endl;
        cout << "   Memory capacity is " << memory_capacity << endl;
    }


};
class PhoneStore{
public:
    string name;
    Smartphone collection[6];
    Smartphone arr2[1];
   int NumberOfSmartphones=0;
    PhoneStore(string Name)
    {
        name = Name;
    }
    void SmartphoneAdd(Smartphone Smartphone_)
    {
        collection[NumberOfSmartphones] = Smartphone_;
        NumberOfSmartphones++;
    }

    void sort() {
        for (int i = 1; i < 6; i++) {
            for (int j = 1; j < 6; j++) {
                if (collection[j].price > collection[j - 1].price) {
                    arr2[0] = collection[j];
                    collection[j] = collection[j - 1];
                    collection[j - 1] = arr2[0];
                }
            }
        }
    for (int i = 0; i < NumberOfSmartphones; i++)
    {
        collection[i].print_1();
    }
    }
};

    int main() {
        Smartphone one(3000, "xiaomi redmi 7", "380989172670", 50, 64);
        Smartphone two(4000, "iphone 6", "380989173070", 60, 128);
        Smartphone three(15000, "nokia 2240", "380989172670", 50, 64);
        Smartphone four(10000, "xuawei 8", "380457172670", 56, 64);
        Smartphone five(8000, "xiaomi redmi 8", "380980982670", 23, 64);
        Smartphone six(7000, "nokia 3310", "380989156770", 88, 64);
        Smartphone collection[6] = {one, two, three, four, five, six};
        PhoneStore phonestore("BestName");
        int a;
        cout<<"Write a price";
        cin>>a;
        if(a>=three.price){
            cout<<"Your mobile is "<<three.model;
        }else if(a>=four.price){
            cout<<"Your mobile is "<<four.model;
        }else if(a>=five.price) {
            cout<<"Your mobile is "<<five.model;
        }else if(a>=six.price){
            cout<<"Your mobile is "<<six.model;
        }else if(a>=two.price){
            cout<<"Your mobile is "<<two.model;
        }else if(a>=one.price){
            cout<<"Your mobile is "<<one.price;
            }

        phonestore.SmartphoneAdd(one);
        phonestore.SmartphoneAdd(two);
        phonestore.SmartphoneAdd(three);
        phonestore.SmartphoneAdd(four);
        phonestore.SmartphoneAdd(five);
        phonestore.SmartphoneAdd(six);
        phonestore.sort();
        return 0;
    }