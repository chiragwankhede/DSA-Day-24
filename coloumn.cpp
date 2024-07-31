#include<iostream>
using namespace std;


//  This is how we can print the 2D array coloun wise - arr[j][i] -

void printArray(int arr[][4] , int r , int c){
        for(int i = 0 ; i < c ; i++){
            for(int j = 0 ; j < r ; j++){
            cout << arr[j][i] << " ";
}
cout << endl;
}
}



int main()

{

    int arr[3][4] = {
        {1,2,3,10},
        {4,5,6,20},
        {7,8,9,30}
    };

    int r = 3;
    int c=4;

    // printArray(arr,r,c);


//  How to take input coloumn wise - 

int brr [2] [3];

int row =2;
int col = 3;

for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        cin>>arr[col][row];
    }
}


 return 0;
}