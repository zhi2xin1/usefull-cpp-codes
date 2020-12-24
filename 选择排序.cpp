#include <iostream>
int selectMin(const int unsort[],int start,int n){
    int min=INT32_MAX,minN=0;
    for(int i=start;i<n;++i) {
        if (unsort[i] < min) {
            min = unsort[i];
            minN=i;
        }
    }
    return minN;
}

int selectSort(int unsort[],int n){
    int min,temp;
    for(int i=0;i<n;++i){
        min=selectMin(unsort,i,n);
        temp=unsort[min];
        unsort[min]=unsort[i];
        unsort[i]=temp;
    }
    return 0;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int unsort[]={9,8,7,6,5,4,3,2,1};
    //int unsort[]={1,2,3,3,5,6,7,8,8};
    selectSort(unsort,9);
    for(int i : unsort){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
