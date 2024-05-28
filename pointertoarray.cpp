// //Pointer to an array of objects

// #include <iostream>
// using namespace std;

// class Item {
//         int code;
//         float price;
//     public:
//         void setData(int a, float b) {
//             code = a;
//             price = b;
//         }
//         void showData(void) {
//             cout << "Code : " << code << "\n";
//             cout << "Price: Rs. " << price << "\n";
//             cout << "\n";
//         }
// };

// const int size = 2;

// int main() {
//     Item *p = new Item [size];
//     Item *d = p;
//     int x, i;
//     float y;

//     for(i=0; i<size; i++) {
//         cout << "Input code and price for item:" << endl;
//         cin >> x >> y;
//         p -> setData(x,y);
//         p++;
//     }
//     for(i=0; i<size; i++) {
//         cout << "\nItem: " << i+1 << "\n";
//         d -> showData();
//         d++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

class item{
    int code,price;
    public:
    void setdata(int a,int b){
        code=a;
        price=b;
    }

    void showdata(){
        cout<<"code="<<code<<endl;
        cout<<"price="<<price<<endl;

    }
};

const int size=3;

int main(){
    item*p=new item[size];
    item*d=p;
    int x;
    float y;
    for(int i=0;i<size;i++){
        cout<<"enetr the value for code price"<<endl;
        cin>>x>>y;
        p->setdata(x,y);
        p++;
    }
    for(int i=0;i<size;i++){
        cout<<"\nitem"<<i+1<<"\n";
        d->showdata();
        d++;

    }
    return 0;
}
