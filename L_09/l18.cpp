
#include <iostream>
#include <string>




string int2string(const int& number)
{
    ostringstream oss;
    oss << number;
    return oss.str();
}

// Read lines from standard input:
int input(int m){
    string sLine;
    int i=0;
    while(getline(std::cin, sLine)){
        if( sLine.empty() );// Ignore empty lines
        else{
            cout<<sLine;
            cout << sLine[0] << sLine[1] << endl;
            i++;
            if(i>=m) break;
        }
    }
    return 0;
}


string app1(string name, int n){
    string res(name + "_");
    res.append(to_string(n));//c++11
    return res;
}
string app2(string name, int n){
    ostringstream os1;
    os1 <<name<<"_"<< n;
    return os1.str();
}
string app3(string name, int n){
    char num[10];
    sprintf(num, "%s_%d",name.c_str(), n); // Could have printed directly using printf()
    //string res1(num);
    return string(num);
}




int main(int argc, char **argv)
{

string sVar("GGGGG");
char* x  = svar.c_str();

string sVar1("LL1234");
int num = stol ( sVar1.c_str(), nullptr);
int num = atoi( sVar1.c_str() );
//if(sscanf(sVar1.c_str(), "%d", &i) != 1)

int num =std::stoi( sVar1 );

int num;
stringstream tmp(s);    // object from the class stringstream
    int num = 0;
    tmp >> num;

std::string res = to_string(num);

string res =  int2string1(number);

const size_t size=255;
   char text_num[size];
    sprintf(text_num, "%d", number); // Could have printed directly using printf()
    string res1(text_num);





