#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

string api_call(){
    return "got some data from web\n";
}

int another_api_Call(){
    return 5;
}

int main(){

    auto response = api_call();

    auto rep = another_api_Call();

    cout << "API CALL VALUE \n" << response;
    cout << "another API CALL VALUE" << rep << endl;
   

    if(typeid(response)==typeid(string)){
        puts("Type of both ID matches\n");
    }
    if(typeid(rep)==typeid(string)){
        puts("Type of both ID int\n");
    }
    return 0;
}