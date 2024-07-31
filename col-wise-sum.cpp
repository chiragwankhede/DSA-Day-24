#include<iostream>
using namespace std;

// Print the sum of elements coloumn wise - 

void colWise(int arr[][3], int r, int c){
    for(int i=0;i<c;i++){
        int sum = 0;
        for(int j=0;j<r;j++){
            sum += arr[j][i];
        }
        cout<<" addition of coloumn : " <<i <<" "<<sum<<endl;
    }
}






int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    int r=3;
    int c=3;

    colWise(arr,r,c);

 return 0;
}