#include <iostream>
#include <conio.h>
using namespace std;
class Int{
    private:
    int val;
    public:
    Int(){
      val = 0;
    }
    Int(int x){
      val = x;
    }
    void display(){
     cout << val << endl;
    }
    void add(Int x, Int y){
     val = x.val + y.val;
    }
};
int main(){
  Int a(5),b(30);
  Int c;
  c.add(a,b);
  c.display();
}
