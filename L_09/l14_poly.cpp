

class Polynome{
 protected: 
   unsigned n; ///< size of Polynome
   double* a;  ///< array of Polynome coefficients
public:
    // default constructor: create empty polynome
    Polynome(){}
    /* constructor: create polynome of given size
     * @params:
     * unsigned n - size of polynome
     **/ 
    Polynome(unsigned m){
       n = m;
       a = new double[n];
    }

    ~Polynome(){
     delete[] a;
   }

};

class AnotherPolynome : public Polynome{
   
   double* a2;
   public:
   AnotherPolynome(){}
   AnotherPolynome(unsigned m){
      n =m;
      a = new double[n];
      a2 = new double[n]; 
  }

   ~AnotherPolynome(){
     delete[] a;
     delete[] a2;
   }
};

int main(){

  Polynome p1(2);
  AnotherPolynome p2(2);

  Polynome *pp1 = new Polynome(200);
  AnotherPolynome* pp2 = new AnotherPolynome(200);
  Polynome* pp3 = new AnotherPolynome(2000);

  delete pp1;
  //delete pp2;
  delete pp3; // Momory leak!!!
}


