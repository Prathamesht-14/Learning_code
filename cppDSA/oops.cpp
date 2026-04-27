#include<iostream>
using namespace std;
class A{
    public :
    int a;

    int geta(){return a;}
    void seta(int b){
      a=b;
    }
};
class Hero{
    private:
    int A;
    public:
    int B;
    static int timetoc;
    Hero(int a,int b){
        cout<<"constructor called"<<endl;
        this->A=a;
        this->B=b;
    }
    Hero(Hero &temp){
        this->A=temp.A;
        this->B=temp.B;
    }
    ~Hero(){
        cout<<"destructor called";

    }
    //current obj ka address this me store hoga
    static int random(){
        return timetoc;
    }
};
int Hero :: timetoc=5;
int main(){
    //  A B; 
    //  B.seta(5);
    //  cout<<B.geta();
    //  A *C=new A;
    //  (*C).seta(4);
    //  cout<<(*C).geta();
    Hero Prathu(5,10) ;//Hero sampada(10,20;)
    //no need to call destructor for static obc but need for dynamic obj
     Hero *b=new Hero(11,12  );
    // delete b;
     cout<<Hero::timetoc<<endl;
     
    //Prathu=sampada;  
   // Hero ritesh(Prathu);//copy constructor
   // cout<<ritesh.B;


}