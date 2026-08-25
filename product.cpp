#include<iostream>
using namespace std;
class Product
{
    int prodID;
    string prodName;
    float price;
    public:
    Product(int id,string name,float p)
    {
        prodID=id;
        prodName=name;
        price=p;
    }
    void calculatePrice(int qauntity)
    {
        float total=price*qauntity;
        cout<<"\nProduct ID :"<<prodID<<endl;
        cout<<"Product Name :"<<prodName<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Qauntity :"<<qauntity<<endl;
        cout<<"Total Price :"<<total<<endl;
    }
};
int main()
{
    int qauntity;
    Product p1(92,"Laptop",50000);
    cout<<"Enter qauntity:";
    cin>>qauntity;
    p1.calculatePrice(qauntity);
    return 0;
}