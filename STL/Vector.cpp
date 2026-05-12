#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back();

    vec.clear();
    
    cout<<"size: "<<vec.size()<<" "<<"capacity: "<<vec.capacity() <<" "<< "is empty: "<<vec.empty()<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    // cout<<"Value at index 2: "<<vec.at(2)<<" "<<vec[3]<<endl;

    // cout<<"Front "<<vec.front()<<" "<<"back: "<<vec.back()<<endl;

    vector<int> squares = {1,4,9,16,25};

    for(int val : squares){
        cout<<val<<" ";
    }
    cout<<endl;

    squares.insert(squares.begin()+2,49);

    for(int val : squares){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> tens(10,-1);
    for(int val :  tens){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> cubes ={1,8,27,64,125};

    vector<int> copycubes(cubes);

    for(int val : copycubes){
        cout<<val<<" ";
    }
    cout<<endl;

    copycubes.erase(copycubes.begin() + 1, copycubes.begin()+3);

    for(int val : copycubes){
        cout<<val<<" ";
    }


    vector<int> num={1,2,3,4,5};
    cout<<"num.end: " << *(num.end())<<endl;

    //iterators
    vector<int> :: iterator it;
    for(it=num.begin();it!=num.end();it++){
        cout<<*(it)<<endl;
    }

    cout<<endl;

    vector<int> nums={2,3,4,5,6};
    vector<int> :: reverse_iterator i;
    for(auto i=nums.rbegin(); i != nums.rend();i++){
        cout<<*(i)<<" ";
    }

    cout<<endl;





    cout<<endl;
    return 0;
}