#include<iostream>
using namespace std;

class Distance{
    private:
        int feets;
        float inches;
    public:
        Distance():feets(0),inches(0){}
        Distance(int ft, int in):feets(ft),inches(in){}
        
        void get_dist(){
            cout<<"Enter the feets: ";
            cin>>feets;
            cout<<"Enter the inches: ";
            cin>>inches;
        }
        void show_dist(){
            cout<<feets<<"."<<inches<<endl;
        }
        Distance operator+(Distance dist){
            int ft = feets + dist.feets;
            float in = inches + dist.inches;
            if(in >= 12){
                ft += 1;
                in -= 12;
            }
            return Distance(ft, in);
        }
        Distance operator-(Distance dist)
        
		{
            int ft = feets - dist.feets;
            float in = inches - dist.inches;
            if(in < 0){
                ft -= 1;
                in += 12;
            }
            return Distance(ft, in);
        }
};

int main(){
    Distance d1, d2, d3;
    d1.get_dist();
    cout<<"d1 = ";
    d1.show_dist();
    d2 = Distance(2, 4.6);
    cout<<"d2 = ";
    d2.show_dist();
    d3 = d1 + d2;
    cout<<"d3 = ";
    d3.show_dist();
    d3 = d2 - d1;
    cout<<"d3 = ";
    d3.show_dist();
    return 0;
}

