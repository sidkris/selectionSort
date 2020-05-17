// selection sort
// arranging a randomly shuffled array into an ordered ascending/descending array
#include <iostream>

int main(){

    int a[] = {5,4,1,3,2};
    int n = sizeof(a)/sizeof(int);
    int i;

    for(i=0; i<n; i++){

        int minIdx = i;
        for(int j=i; j<n; j++){

            if(a[j] < a[minIdx]){
                minIdx = j;
            }
        }

        std::swap(a[i],a[minIdx]);


    }
    for (i=0; i<n; i++){
        std::cout << a[i] << " ";
    }
    return 0;
}


