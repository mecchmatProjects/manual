
#include <iostream>
#include <string>
#include <sstream> // ostringstream

#include <cstring> // stol
// int 2 string 1
std::string int2string(int number){
    std::ostringstream oss;
    oss << number;
    return oss.str();
}

// int 2 string 1
std::string app1(std::string name, int n){
    std::ostringstream os1;
    os1 <<name<<"_"<< n;
    return os1.str();
}

// int 2 string 2 c++11
std::string app2(std::string name, int n){
    std::string res(name + "_");
    res.append(std::to_string(n));//c++11
    return res;
}


// int 2 string 3
std::string app3(std::string name, int n){
    char num[10];
    sprintf(num, "%s_%d",name.c_str(), n); // Could have printed directly using printf()
    //string res1(num);
    return std::string(num);
}




// Read lines from standard input:
int input(int m){
    std::string sLine;
    int i=0;
    while(std::getline(std::cin, sLine)){
        if( sLine.empty() );// Ignore empty lines
        else{
            std::cout<<sLine;
            std::cout << sLine[0] << sLine[1] << "\n";
            i++;
            if(i>=m) break;
        }
    }
    return 0;
}




int main(int argc, char **argv)
{
 // string to char*
std::string sVar("GGGGG");
const char* x  = sVar.c_str();
std::cout<<x;
 
std::string sVar1("1234");
// String to int 1
int num1 = std::stol( sVar1.c_str(), nullptr);
std::cout<<"num="<<num1<<"\n";
// String to int 2
int num2 = atoi( sVar1.c_str() );
std::cout<<"num="<<num2<<"\n";
// String to in 3
int num3; 
if(sscanf(sVar1.c_str(), "%d", &num3) != 1){
   std::cout<<"error cast"; 
}
else{
   std::cout<<"num="<<num3<<"\n";
}

// String to int 4
int num4 =std::stoi( sVar1 );
std::cout<<"num="<<num4<<"\n";

// String to int 5
int num5;
std::stringstream tmp(sVar1);// object from the class stringstream
int num = 0;
tmp >> num5;

std::cout<<"num5="<<num5<<"\n";
num = num5;
// int to string 1
std::string res1 = std::to_string(num); //c++11
std::cout<<"res="<<res1<<"\n";

// int to string 2
std::string res2 =  int2string(num);
std::cout<<"res="<<res2<<"\n";
// int to string 3
const size_t size=255;
char text_num[size];
sprintf(text_num, "%d", num); // Could have printed directly using printf()
std::string res3(text_num);
std::cout<<"res="<<res3<<"\n";
}




