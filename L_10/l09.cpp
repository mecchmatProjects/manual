#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <exception>

int file_processing(std::string full_path){
   std::fstream file(full_path.c_str(), std::ios::binary);
   if(file.is_open()) {
        int magic_number = 0;
       
        int res = file.read((char *)&magic_number, sizeof(magic_number));
        if(res!=4){
           throw "error";
        }
           
        if(magic_number!=42) throw magic_number;
        // some code 
    } else {
        throw std::runtime_error("Unable to open file `" + full_path + "`!");
    }

return 0;
}

int main(int argc, char **argv)
{
    try{
        file_processing("1.txt");
    }
    catch(std::runtime_error e){
        std::cout<<"error: "<<e.what()<<"\n";
    }
    catch(int a){
        std::cout<<"a="<<a<<" is not magic!\n";
    }
    catch(const char* a){
        std::cout<<"can't read 1 number!\n";
    }
}

/*
Unable to open file `1.txt`!
*/
