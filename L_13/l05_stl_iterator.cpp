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
int mas[] ={1,2,3,4,5, 10,20,30};
std::vector<int> resulting(mas,mas+5); // куди вставляємо
std::vector<int> to_insert(mas+6,mas+8); // що вставляємо
std::vector<int>::iterator ptr = resulting.begin();
std::advance(ptr, 3); // на 3 позицію встановлюємо ітератор
//ptr += 3; // для вектору це те саме що і попередній рядок
std::cout << "Third element is : "<<*ptr<<"\n"; 
std::insert_iterator<std::vector<int> > ari = inserter(resulting, ptr); // куди вставляти
//std::insert_iterator<std::vector<int> > ari(resulting, ptr);
// копіюємо вміст to_insert(без 1-го ел-ту) в resulting 
std::copy(to_insert.begin()+1, to_insert.end(), ari); 
std::cout << "The new vector after inserting elements is : ";
printCollect(resulting);
// те саме для списку
std::list<int> list1(mas,mas+5);
std::list<int>::iterator ptr2 = list1.begin();
std::advance(ptr2, 3);
//ptr += 3; // а ось для списку це некоректно
std::cout << "Third element is : "<<*ptr2<<"\n";
std::copy(to_insert .begin(), to_insert.end(), inserter(list1,ptr2));
std::cout << "The new list after inserting elements is : ";
printCollect(list1);
}
