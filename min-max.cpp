#include<iostream>
#include<limits.h>
using namespace std;

//  In c++, a function can return a single value at a time, you can also return multiple value using different syntax-  

int minNum(int arr[][4] , int r , int c){
    int min = INT_MAX;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] <min)
                min = arr[i][j];

    }
    }
    return min;
};


int maxNum(int arr[][4] , int r, int c){
int max = INT_MIN;

for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] > max)
                max= arr [i][j];
            
        }
    }
    return max;
};



int main()
{

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 122}
    };
    int r= 3 ; 
    int c=4;



int minimum = minNum(arr,r,c);
int maximum = maxNum(arr,r,c);

cout<<"minimum number is : " << minimum<<endl;
cout<<"maximum number is : " << maximum;

// int max= minAndmax(arr, r, c);
// int min= minAndmax(arr, r,c);

// cout<<"max no " << max<<endl;
// cout<<"min no "<< min;

 return 0;
}