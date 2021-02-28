#include<iostream>
using namespace std;

int test(int total, int per_count, int change){
    int number = total / per_count;
    int remain_number = number;

    while(remain_number >= change){
        int change_number = remain_number / change;
        int rest_number = 0;

        number = number + change_number;

        rest_number = remain_number + change_number - change_number * change;
        remain_number = rest_number;
        //cout<<"rest number = "<<rest_number<<endl;
    }

    return number;
}

int main(){

    int a = test(10, 2, 5);
    cout<<a<<endl;

    int b = test(12, 4, 5);
    cout<<b<<endl;

    int c = test(6, 2, 2);
    cout<<c<<endl;

    return 0;
}