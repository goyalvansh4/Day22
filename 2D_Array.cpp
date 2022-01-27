#include<iostream>
using namespace std;
 
  bool isElement(int arr[][3],int row,int col,int key){
      for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
          if(arr[row][col] ==key){
            return 1;
         }
      } 
      
      }
    return 0;
 }
 
 void rowSum(int arr[][3],int row,int col){
     
  for(int row=0;row<3;row++){
     int sum=0;
        for(int col=0;col<3;col++){
          sum += arr[row][col];
          
      }
      cout<<" Sum of row "<< row+1 << "->" <<sum<<endl;
   }
 }
 
 
int main(){

int arr[3][3];
cout<<" Enter the elements "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cin>>arr[i][j];
   }
 }
 
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<arr[i][j]<<" ";
   }cout<<endl;
 }
 
 cout<<" Enter target value "<<endl;
 int key;
 cin>>key;
 
 if(isElement(arr,3,3,key)){
   cout<<" Element is found "<<endl;
    }
 else{
   cout<<" Element is not found "<<endl;
   }
   cout<<endl;
  rowSum(arr,3,3);
}
