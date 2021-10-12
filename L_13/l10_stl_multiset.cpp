
#include <iostream> 
#include <set> 
#include <vector> 
//#include <iterator> 

// function comarator
bool fncomp (int lhs, int rhs) {return lhs*lhs<rhs*rhs;}

//class Comparator
struct Classcomp {
  bool operator() (const int& lhs, const int& rhs) const
  {return lhs>rhs;}
};

template<class T>
void printSet(const T & v){
   typename T::iterator itr;
   for(itr=v.begin(); itr!=v.end();++itr){
     std::cout <<"	"<<*itr;
   }
    std::cout<< "\n";
}

int main (){
   std::multiset<int> first_set;                           // empty set of ints
   int myints[]= {10,-20,30,40,50,50,40};
    
   std::multiset<int> second_set(myints,myints+7);        // range
   std::multiset<int> third_set (second_set);                  // a copy of second
   //set<int> fourth_set (third_set.begin(), third_set.end());  // iterator constructor
   std::vector<int> v(third_set.begin(), third_set.end());
   std::multiset<int> fourth_set (v.begin(), v.end());
   std::cout<<"2,3,4 set:";
   printSet(fourth_set);

   std::cout<<"set size:"<< second_set.size()<<"\n";
   std::cout<<"set max size:"<< second_set.max_size()<<"\n";
   std::cout<<"how many of 20 there "<< second_set.count(20)<< " of " << *second_set.find(20)<<"\n";
   std::cout<<"how many of 50 there "<< second_set.count(50)<<" of " << *second_set.find(50)<<"\n";
   std::cout<<"equal range for 20: " << *second_set.equal_range(20).first << ", " << *second_set.equal_range(20).second<<"\n";

   std::multiset<int,Classcomp> fifth_set;                 // class as Compare

   bool(*fn_pt)(int,int) = fncomp;
   std::multiset<int,bool(*)(int,int)> sixth_set (fn_pt);  // function pointer as Compare
  
   std::multiset <int,std::greater<int> > seventh_set;
  //insert elements in random order 
  seventh_set.insert(40); 
  seventh_set.insert(30);
  seventh_set.insert(60);
  seventh_set.insert(-20);
  seventh_set.insert(50);
  seventh_set.insert(30); // only one 30 will be added to the set 
  seventh_set.insert(10); 
  for (std::multiset<int,std::greater <int> >::iterator it = seventh_set.begin(); it!=seventh_set.end();++it){
    first_set.insert(*it);
    fifth_set.insert(*it);
    sixth_set.insert(*it);
  }
  std::cout<<"1 and 7th set:";
  printSet(first_set);
  std::cout<<"5th set:";
  printSet(fifth_set);
  std::cout<<"6th set:";
  printSet(sixth_set);

// remove all elements up to 30 in  
  std::cout << "second_set after removal of elements less than 30:"; 
  second_set.erase(second_set.begin(), second_set.find(30));
  printSet(second_set); 
   // remove element with value 50 in  
  int num; 
  num = third_set.erase (50); 
  std::cout << "third_set.erase(50) : ";
  std::cout << num << " removed " ;

  printSet(third_set); 

  //lower bound and upper bound for set seventh_set 
  std::cout << "seventh_set.lower_bound(40) : "<< *seventh_set.lower_bound(40) << "\n"; 
  std::cout << "seventh_set.upper_bound(40) : "<< *seventh_set.upper_bound(40) << "\n"; 

  //lower bound and upper bound for set second_set 
  std::cout << "second_set.lower_bound(40) : "<< *second_set.lower_bound(40) << "\n"; 
  std::cout << "second_set.upper_bound(40) : "<< *second_set.upper_bound(40) << "\n"; 
} 
