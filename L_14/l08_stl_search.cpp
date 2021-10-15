#include <bits/stdc++.h> // підключаємо відразу все що можемо
bool myPredicate (int i, int j) {
  return (i%2==j%2); // елементи рівні, якщо мають однакову парність
}

int main () {
  std::vector<int> haystack;
  // встановлюємо значення:        haystack: 10 20 30 40 50 60 70 80 90
  for (int i=1; i<10; i++) haystack.push_back(i*10);
  // шукаємо з предикатом по замовченню
  int needle1[] = {40,50,60,70,60,60};
  std::vector<int>::iterator it;
  it = std::search (haystack.begin(), haystack.end(), needle1,needle1+4);
  if (it!=haystack.end())
    std::cout << "needle1 found at position " << (it-haystack.begin()) << '\n';
  else
    std::cout << "needle1 not found\n";

 // пошук використовуючи власний предикат
  int needle2[] = {20,30,50};
  it = std::search (haystack.begin(), haystack.end(), needle2, needle2+3, myPredicate);

  if (it!=haystack.end())
    std::cout << "needle2 equal parity at position " << (it-haystack.begin()) << '\n';
  else
    std::cout << "needle2 equal parity not found\n";

  haystack.push_back(90);  haystack.push_back(80);
  it = std::search_n (haystack.begin(), haystack.end(), 2,90);
  if (it!=haystack.end())
    std::cout << "two 90th are found at position " << (it-haystack.begin()) << '\n';
  else
    std::cout << "two 90th not found\n";
}
