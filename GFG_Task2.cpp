/*
Write a program that asks for an index and a number.
Then it includes the number at the indicated index of the array = {1,2,3,4,5,6} 
and moves a position forward (from u to u+1) each element after the selected index.
*/

#include<iostream>
using namespace std;

int main(){
    int array[7]={1,2,3,4,5,6};
    int index,num;
    cout<<"Enter the index and number to be inserted in the array"<<endl;
    cin>>index>>num;
    for(int i=5;i>index-2;i--){
        array[i+1]=array[i];
    }
    array[index-1]=num;

    for(int i=0;i<7;i++)
    cout<<array[i]<<" ";
    return 0;
}