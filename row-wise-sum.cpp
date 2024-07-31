#include<iostream>
using namespace std;

// Print the sum of elements row wise - 

void sum(int arr[][4], int r, int c){

    for(int i=0;i<r;i++){
        int add =0;
        for(int j=0;j<c;j++){
            add =  add + arr[i][j];
        }
        cout<<" addition of row : " <<i <<" "<<add<<endl;
    }
}





int main()
{

int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}

};

int r= 3;
int c=4;


sum(arr,r,c);

 return 0;
}