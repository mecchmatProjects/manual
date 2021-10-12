#include <iostream> 
#include <map> 
#include <stdexcept>


template <typename K, typename V>
void printMap(const std::multimap<K,V> & dict, string name){
    // printing map gquiz1 
    typename multimap<K, V>::const_iterator itr; 
    std::cout << "The map " << name <<" is : \n"; 
    for (itr = dict.begin(); itr != dict.end(); ++itr) { 
        std::cout << " " << itr->first 
             << " " << itr->second << " "; 
    } 
    std::cout << "\n"; 
}
  
int main(){ 
    // empty map container 
    std::multimap<string, string> dict1; 
  
    // insert elements in random order 
    dict1.insert(std::make_pair("1", "word1")); 
    dict1.insert(std::make_pair("2", "word2")); 
    dict1.insert(std::make_pair("1", "word3")); 
    dict1.insert(std::make_pair("2", "word4")); 
    dict1.insert(std::make_pair("3", "word5")); 
    dict1.insert(std::make_pair("4", "word6")); 
    dict1.insert(std::make_pair("5", "word7")); 
    dict1.insert(std::make_pair("5", "word8")); 

    printMap(dict1, "dict1");
  
    // assigning the elements from gquiz1 to gquiz2 
    std::multimap<string, string> dict2(dict1.begin(), dict1.end()); 

    printMap(dict2, "dict2");
  
    // remove all elements up to 
    // element with key=3 in dict2 
    std::cout << "dict2 after removal of"
            " elements less than key=1 : \n"; 
    dict2.erase(dict2.begin(), dict2.find("2")); 
    printMap(dict2, "dict2 erased: ");
      
    // remove all elements with key = 5 
    int num; 
    num = dict2.erase("4"); 
    cout << "dict2.erase(4) : " << num << " removed \n"; 
 
    printMap(dict2, "dict2 erased 4");  
    // lower bound and upper bound for map gquiz1 key = 5 
    std::cout << "dict1.lower_bound(5) : "  << "KEY = "; 
    std::cout << dict1.lower_bound("5")->first << " "; 
    std::cout << "	ELEMENT = "<< dict1.lower_bound("5")->second << endl; 

    dict1.insert(make_pair("5", "word9"));
    dict1.insert(make_pair("6", "word10"));
    std::cout<<"all values with key=5:\n";
    std::pair <std::multimap<std::string,std::string>::iterator, 
           std::multimap<std::string,std::string>::iterator> eq_range;
    eq_range = dict1.equal_range("5");

    for (std::multimap<std::string,std::string>::iterator it=eq_range.first;
                                                       it!=eq_range.second; ++it)
      std::cout << " " << it->second;

} 

