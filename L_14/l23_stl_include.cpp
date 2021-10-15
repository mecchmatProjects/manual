// includes algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::includes, std::sort
#include <cstring>
#include <cctype>

bool myCharCmp (char a, char b) { 
  return islower(a)<islower(b); 
}

int main () {
  char long_word[] = "abracaDABRA";
  char small_word[] = "cadar";

  std::sort (long_word,long_word+strlen(long_word)); 
  // 
  std::sort (small_word,small_word+strlen(small_word));

  // using default comparison:
  if ( std::includes(long_word,long_word+strlen(long_word),small_word,small_word+strlen(small_word)) )
    std::cout << "abracaDABRA includes cadar!\n";
  else{
     std::cout << "abracaDABRA do not includes cadar!\n";
  }

  // using myfunction as comp:
  if ( std::includes(long_word,long_word+strlen(long_word),small_word,small_word+strlen(small_word),myCharCmp)  )
    std::cout << "abracadara includes cadar!\n";
}
/*
abracaDABRA do not includes cadar!
abracadara includes cadar
*/
