#include <bits/stdc++.h>
using namespace std;
class car{
    public:
    int speed = 100;//default
    
    void insideFn() {
        speed = 201;
        cout<<"inside, speed= "<<speed<<endl;
    }
    void outsideFn(int);
};

void car::outsideFn(int b) {
    b = 202;
    cout<<"outside, speed= "<<speed<<endl;
    cout<<"outside, speed= "<<b<<endl;
}

int main() {

    car car1;
    car1.speed = 200;
    cout<<"car1, speed= "<<car1.speed<<endl;
    car1.insideFn();
    car1.outsideFn(car1.speed);
    return 0;
}

*****************IO*******************
car1, speed= 200
inside, speed= 201
outside, speed= 201
outside, speed= 202
