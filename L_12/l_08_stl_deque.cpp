#include <iostream> 
#include <deque>
#include <stack>  

using namespace std; 

template<typename T>
void showdq(const deque <T> & g){  
 for(size_t i=0; i<g.size();++i) 
    cout << '\t'<< g[i]; 
 cout << '\n'; 
} 

template<class T>
void printStack(const stack<T> & st){ 
 stack<T> st1(st);
 while(!st1.empty()){ 
    cout << ", "<< st1.top();
    st1.pop();  
 }
 cout << ";\t"; 
} 

template<typename T>
void showdq(const deque<stack<T> > & g){ 
 
 for(size_t i=0; i<g.size();++i) {
    cout << "stack "<< i<<":";
    printStack(g[i]); 
 }
 cout << '\n'; 
} 

int main(){ 

deque <char*> deq1; 
deq1.push_back((char*)"cadabra"); 
deq1.push_front((char*)"abra"); 
deq1.push_back((char*)"bums"); 
deq1.push_front((char*)"\n"); 
cout << "The deque deq1 is : "; 
showdq(deq1); 

cout << "\ndeq1.size() : "<< deq1.size(); 
cout << "\ndeq1.max_size() : "<< deq1.max_size(); 

cout << "\ndeq1.at(2) : "<< deq1.at(2); 
cout << "\ndeq1.front() : "<< deq1.front(); 
cout << "\ndeq1.back() : "<< deq1.back(); 

cout << "\ndeq1.pop_front() : ";
deq1.pop_front(); 
showdq(deq1); 

cout << "\ndeq1.pop_back() : "; 
deq1.pop_back(); 
showdq(deq1); 

deque<stack<int> > deq2;
stack<int> a1;
a1.push(1);a1.push(2);
deq2.push_back(a1); 

stack<int> a2(a1);
a2.push(3);
deq2.push_back(a2);

deq2.push_front(a1);
a1.pop();
deq2.push_back(a1);

showdq(deq2); 

 deque<int> foo (3,100);   // three ints with a value of 100
 deque<int> bar (2,200);   // two ints with a value of 200

  if (foo==bar) std::cout << "foo and bar are equal\n";
  if (foo!=bar) std::cout << "foo and bar are not equal\n";
  if (foo< bar) std::cout << "foo is less than bar\n";
  if (foo> bar) std::cout << "foo is greater than bar\n";
  if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
  if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";

}

