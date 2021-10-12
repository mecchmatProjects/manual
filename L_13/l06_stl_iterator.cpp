#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
#include<deque> // for vectors
#include<list> // for vectors

template<class Coll>
void printCollect(Coll & v){
  typename Coll::const_iterator it = v.begin();
  for(;it!=v.end();++it){
    std::cout<<*it<<" ";
 } 
 std::cout<<"\n";
}

int main() {

  std::deque<int> foo,bar;
  for (int i=1; i<=5; i++){ foo.push_back(i); bar.push_back(i*10); }

  std::copy (bar.begin(),bar.end(),std::front_inserter(foo));

  std::cout << "foo after front insert contains:";
  printCollect(foo);

  std::vector<int> foo1,bar1;
  for (int i=1; i<=5; i++)  {
  foo1.push_back(i); bar1.push_back(i*10);
 }
  std::copy (bar1.begin(),bar1.end(),back_inserter(foo1));

  std::cout << "foo after back insert contains:";
  printCollect(foo1);
}
