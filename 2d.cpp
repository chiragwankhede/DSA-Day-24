#include<iostream>
using namespace std;

//  For 2D-array, In function, we have to pass atleast the no. of coloumn, else it will throw error -

void printArray (int arr[][4] , int row ,int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}

int main(){

// Initialization of an 2D-array - 

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5,6,7,8},
        {9,10,11,12}
    };
//  We have to give at least no. of coloumn, else the code will throw error-

//  To print the above 2D-Array-

int row = 3;
int col = 4;

printArray(arr,row,col);


// How to to input in 2D- array- (Row-wise) 

int brr [3] [4] ;
int r=3;
int c=4;

for(int i= 0;i<r;i++){
    
    for(int j=0; j<c; j++){
        cout<<"Enter the input fro number for " <<"rows :" <<i << " "  << "coloumn " <<j <<" " <<endl;
        cin>>arr[i][j];
    }
}




 return 0;
}