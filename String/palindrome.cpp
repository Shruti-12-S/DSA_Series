#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

string Reverse(string str){
        int st=0, end= str.length()-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }

    return str;
}

bool isPalindrome(string str){
    string rev = Reverse(str);
    if(rev == str){
        return true;
    }
    else{
        return false;
    }
 
}

int main(){
    string str;

    cout<<isPalindrome("shruti")<<endl;



    return 0;
}