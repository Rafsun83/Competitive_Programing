// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks[10];
//     int *ptr;
//     int i;
//     // cout<<"The elemnt of the array: ";
//      cout<<"element of array: "<<marks[ i]<<endl;
//     for (  i=0; i<10;i++){
//      cin>>marks[i];
//     }
   

//     ptr=marks;
//     cout<<"The ptr value: "<<*ptr<<endl;
//     cout<<"The marks value: "<<*marks<<endl;

// }
#include <iostream>  
using namespace std;  
int main()  
{  
    int *ptr;  // integer pointer declaration  
    int marks[10]; // marks array declaration  
    cout << "Enter the elements of an array :" << endl;  
    for(int i=0;i<10;i++)  
    {  
        cin>>marks[i];  
    }  
    ptr=marks; // both marks and ptr pointing to the same element..  
    cout << "The value of *ptr is :" <<*ptr<< endl;  
    cout << "The value of *marks is :" <<*marks<<endl;  
} 