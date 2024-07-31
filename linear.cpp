#include<iostream>
using namespace std;

bool searchTarget(int arr[][4] , int r, int c, int target){
    for(int i=0; i<r;i++ ){
        for(int j=0;j<c;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}



int main()
{

int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

int r=3;
int c=4;

int target = 11;

bool ans = searchTarget(arr,r,c,target);

if(ans==true)
cout<<"target is present";

else
cout<<"target is not present";

 return 0;
}