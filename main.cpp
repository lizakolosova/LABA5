#include <string>
#include <iostream>
using namespace std;
class Smartphone{
public:
    int price_;
    string model_;
    string telephone_number_;
    double battery_power_;
    double memory_capacity_;
    Smartphone(){}
    Smartphone (int Price, string Model, string Telephone_number, double Battery_power, double Memory_capacity)
    {
        price_=Price;
        model_=Model;
        telephone_number_=Telephone_number;
        battery_power_=Battery_power;
        memory_capacity_=Memory_capacity;
    }
    void show_smartphone_characteristics()
    {
        cout << "\nPrice is " << price_ << endl;
        cout << "Model is " << model_ << endl;
        cout << "Telephone number is " << telephone_number_ << endl;
        cout << "Battery power is " << battery_power_ << endl;
        cout << "Memory capacity is " << memory_capacity_ << endl;
    }

};
class PhoneStore{
public:
    string name_;
    Smartphone smartphone_collection[6];
    Smartphone temp[1];
   int NumberOfSmartphones=0;
    PhoneStore(string Name)
    {
        name_ = Name;
    }
    void add_smartphone(Smartphone Smartphone_)
    {
        smartphone_collection[NumberOfSmartphones] = Smartphone_;
        NumberOfSmartphones++;
    }

    void sort_smartphones() {
        for (int i = 1; i < 6; i++) {
            for (int j = 1; j < 6; j++) {
                if (smartphone_collection[j].price_ > smartphone_collection[j - 1].price_) {
                    temp[0] = smartphone_collection[j];
                    smartphone_collection[j] = smartphone_collection[j - 1];
                    smartphone_collection[j - 1] = temp[0];
                }
            }
        }
        for (int i = 0; i < NumberOfSmartphones; i++) {
            smartphone_collection[i].show_smartphone_characteristics();
        }
    }
};

    int main() {
        Smartphone smartphone_1(3000, "xiaomi redmi 7", "380989172670", 50, 64);
        Smartphone smartphone_2(4000, "iphone 6", "380989173070", 60, 128);
        Smartphone smartphone_3(15000, "nokia 2240", "380989172670", 50, 64);
        Smartphone smartphone_4(10000, "xuawei 8", "380457172670", 56, 64);
        Smartphone smartphone_5(8000, "xiaomi redmi 8", "380980982670", 23, 64);
        Smartphone smartphone_6(7000, "nokia 3310", "380989156770", 88, 64);
        Smartphone collection[6] = {smartphone_1, smartphone_2, smartphone_3, smartphone_4, smartphone_5, smartphone_6};
    int entered_price;
    cout<<"Write a price";
    cin>>entered_price;
    if(entered_price>=smartphone_3.price_){
        cout<<"Smartphone model is "<<smartphone_3.model_;
    }else if(entered_price>=smartphone_4.price_){
        cout<<"Smartphone model is "<<smartphone_4.model_;
    }else if(entered_price>=smartphone_5.price_) {
        cout<<"Smartphone model is "<<smartphone_5.model_;
    }else if(entered_price>=smartphone_6.price_){
        cout<<"Smartphone model is "<<smartphone_6.model_;
    }else if(entered_price>=smartphone_2.price_){
        cout<<"Smartphone model is "<<smartphone_2.model_;
    }else if(entered_price>=smartphone_1.price_) {
        cout << "Smartphone model is " << smartphone_1.price_;
    }
        PhoneStore phonestore("BestName");
        phonestore.add_smartphone(smartphone_1);
        phonestore.add_smartphone(smartphone_2);
        phonestore.add_smartphone(smartphone_3);
        phonestore.add_smartphone(smartphone_4);
        phonestore.add_smartphone(smartphone_5);
        phonestore.add_smartphone(smartphone_6);
        phonestore.sort_smartphones();
        return 0;
    }