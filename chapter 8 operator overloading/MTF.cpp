#include<iostream>
using namespace std;
class Distance
{
    private:
    const float MTF;
    int feet;
    float inches;
    public:
    Distance():feet(0),inches(0),MTF(3.280833)
{

}
    Distance(float meters):MTF(3.280833)
    {
        float fltfeet=MTF*meters;
        feet=int(fltfeet);
        inches=12*(fltfeet-feet);
    }
    Distance(int ft,float in):feet(ft),inches(in),MTF(3.280833)
    {}
    void get_dist()
    {
        cout<<"enter the feets:";
        cin>>feet;
        cout<<"enter the inches:";
        cin>>inches;
    }
    void show_dist()
    {
        cout<<"feets="<<feet<<"'"<<endl;
		cout<<"inches="<<inches<<""""<<endl;

    }
    operator float() const//for assigning the value from basic type to the user define
    {
        float fracfeet=inches/12;
        fracfeet+=static_cast<float>(feet);
        return fracfeet/MTF;
    }
    };

    int main()
    {
        float mtrs;
        Distance dist1=2.3;
        cout<<"Distance 1=";
        dist1.show_dist();
        mtrs=static_cast<float>(dist1); 
        cout<<"distance 1="<<mtrs<<"meters "<<endl;
        Distance dist2(5,10.5);
        dist2=mtrs;
        cout<<"distance 2="<<mtrs<<"meters";
//        d2=mtrs;
//        cout<<"distance d2="<<d2;
    }
    
