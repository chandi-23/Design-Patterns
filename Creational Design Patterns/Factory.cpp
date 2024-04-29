#include<iostream>

using namespace std;

class Logistics {
public:
    virtual string planDelivery() = 0;
    virtual string createTransport() = 0;
    
    virtual ~Logistics() {} // Virtual destructor
};

class sea: public Logistics {
public:
    string planDelivery(){
        return "Delivery by Sea";
    }

    string createTransport(){
        return "SHIP";
    }
};

class road: public Logistics{
public:
    string planDelivery() {
        return "Delivery by road";
    }
    
    string createTransport() {
        return "TRUCK";
    }
};

enum transportType {ROAD, SEA};

class transportFactory {
    public:
        Logistics* create(transportType T){
            switch (T)
            {
            case ROAD:
                return new road();
            case SEA:
                return new sea();
            default:
                break;
            }
        }
};


int main()
{   
    transportFactory tf;

    Logistics *rd = tf.create(ROAD);
    Logistics *se = tf.create(SEA);

    cout << se -> planDelivery() << endl;
    cout << se -> createTransport() << endl;

    cout << rd -> planDelivery() << endl;
    cout << rd -> createTransport() << endl; 

    delete rd;
    delete se;
    return 0;
}