#include<iostream>
#include <vector>
using namespace std;

// Product class representing any item of any ECommerce.
class Product{
    public:
    string sName;
    double dPrice;

    Product(string sName,double dPrice){
        this->sName=sName;
        this->dPrice=dPrice;
    }
};


// Violating SRP: ShoppingCart is handling multiple responsibilities
class ShoppingCart{
    private:
    vector<Product*>products;

    public:
    void addProduct(Product * p){
        products.push_back(p);
    }

    const vector<Product* >& getProducts(){
        return products;
    }

    // 1. Calculates total price in cart.
    double calculateTotal(){
        double dtotal=0;
        for(auto p:products){
            dtotal+=p->dPrice;

        }
        return dtotal;
    }

    // 2. Violating SRP - Prints invoice (Should be in a separate class)
    void printInvoice(){
        cout<<"Shopping Cart Invoice:\n";
        for(auto p:products){
            cout<<p->sName<<" - Rs "<< p->dPrice<<endl;
        }

       cout << "Total: Rs " << calculateTotal() << endl;
    }


    // 3. Violating SRP - Saves to DB (Should be in a separate class)
    void saveToDatabase() {
        cout << "Saving shopping cart to database..." << endl;
    }
};


int main()
{
    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(new Product("Laptop Victus",70000));
    cart->addProduct(new Product("Mouse", 2000));

    cart->printInvoice();

    cart->saveToDatabase();


    return 0;
}
