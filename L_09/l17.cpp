#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string x("Literal");
    std::string sVar1("Програмування на Сі++");
   
    char  cVar[10]= "Hello!";
    std::string sVar2(cVar);


    std::string sVar3(5, 'a');              // 5 символів 'a': "aaaaa"
    std::string Var1 ("String Constructor");
    vstring sVar4(Var1, 8);  // Ініціалізує рядок з 8-го символу до кінця рядка  Var1: "Constructor"
    

    std::cout << sVar3 << sVar4<<"\n";
}
