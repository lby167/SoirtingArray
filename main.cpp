#include<iostream>
using namespace std;

void bubbleSorting(int[],int);
void swap(int &,int &);

int main()
{
    int values[6]={6,1,5,2,4,3};
    
    //display unsorted array
    cout<<"The unsorted values:\n";
    for (auto element:values){
        cout<<element<<" ";
        cout<<endl;
    }
    
    bubbleSorting(values,20);
    
    //sort the array using bubble sort
    cout<<"The sorted values:\n";
    for(auto element:values){
        cout<<element<<" ";
    cout<<endl;
    }
    return 0;
    
}
    //the bubble sort function
    void bubbleSort(int array[], int size)
    {
        int maxElement;
        int index;
        int countSwap=0;
        for(maxElement=size-1; maxElement>0;maxElement--){
            for(index=0;index<maxElement;index++){
                
                if(array[index]>array[index+1]){
                    swap(array[index],array[index+1]);
                    countSwap=countSwap+1;
                }
            }
            
        }
        cout<<"Swap count is "<<countSwap<<endl;
        
    }
    
    //swap function
    void swap(int &a, int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    
    
    
    
    
    
    
    

