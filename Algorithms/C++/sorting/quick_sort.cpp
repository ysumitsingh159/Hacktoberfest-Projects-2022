#include <bits/stdc++.h>
using namespace std;


//Array declared globally
vector<int> arr;

//swapping elements in the array
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int part(int l,int h){
    int i=l;
    int j=l;
    int pivot=arr[h];
    while(i<h){
        if(arr[i]>pivot){
            i++;
        }
        else{
            swap(&arr[i],&arr[j]);
            i++;
            j++;
        }
    }
    swap(&arr[j],&arr[h]);
    return j;
}

//quicksort recursive function
void quicksort(int l,int h){
    
    if(l<h){
        int pivot=part(l,h);
        quicksort(l,pivot-1);
        quicksort(pivot+1,h);
    }
  
}

//Driver code---------------
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    quicksort(0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}