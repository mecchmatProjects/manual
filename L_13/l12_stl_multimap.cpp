#include <iostream> 
#include <map> 
#include <stdexcept>
  
using namespace std; 

template <typename K, typename V>
void printMap(const multimap<K,V> & dict, string name){
    // друкуємо відображення 
    typename multimap<K, V>::const_iterator itr; 
    cout << "The map " << name <<" is : \n"; 
    for (itr = dict.begin(); itr != dict.end(); ++itr) { 
        cout << " " << itr->first 
             << " " << itr->second << " "; 
    } 
    cout << endl; 
}
  
int main(){ 
    // конструктор за замовченням 
    multimap<string, string> dict1; 
  
    // вставляємо елементи
    dict1.insert(make_pair("1", "word1")); 
    dict1.insert(make_pair("2", "word2")); 
    dict1.insert(make_pair("1", "word3")); 
    dict1.insert(make_pair("2", "word4")); 
    dict1.insert(make_pair("3", "word5")); 
    dict1.insert(make_pair("4", "word6")); 
    dict1.insert(make_pair("5", "word7")); 
    dict1.insert(make_pair("5", "word8")); 

    printMap(dict1, "dict1");
  
    // конструктор за ітераторами
    multimap<string, string> dict2(dict1.begin(), dict1.end()); 

    printMap(dict2, "dict2");
  
    // видаляємо всі елементи з key=3 in dict2 
    cout << "dict2 after removal of elements less than key=1 : \n"; 
    dict2.erase(dict2.begin(), dict2.find("2")); 
    printMap(dict2, "dict2 erased: ");
      
    // видаляємо елементи з key = 5 
    int num; 
    num = dict2.erase("4"); 
    cout << "dict2.erase(4) : " << num << " removed \n"; 
 
    printMap(dict2, "dict2 erased 4");  
    // lower bound та upper bound для map з key = 5 
    cout << "dict1.lower_bound(5) : "  << "KEY = "; 
    cout << dict1.lower_bound("5")->first << " "; 
    cout << "	ELEMENT = "<< dict1.lower_bound("5")->second << endl; 

    dict1.insert(make_pair("5", "word9"));
    dict1.insert(make_pair("6", "word10"));
    cout<<"all values with key=5:\n";
    pair <multimap<string,string>::iterator, multimap<string,string>::iterator> eq_range;
    eq_range = dict1.equal_range("5");
    for (multimap<string,string>::iterator it=eq_range.first; it!=eq_range.second; ++it)
      cout << " " << it->second;

} 
