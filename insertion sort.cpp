#include<iostream>
using namespce std;
int main(){
int ket,i,j,m;
int array[6]={32,12,31,3,24,23};
for(j=1;j<6;j++){
  key=array[j];
  i=j-1;
  while(i>=0&&a[i]>key){
    a[i+1]=a[i];
    i=i-1;
  }
a[i+1]=key;
}
for(m=0;m<6;m++)
cout<<array[m]<<endl;
return 0;
}
