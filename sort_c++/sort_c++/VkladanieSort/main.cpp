#include <iostream>


void InsertSort(int *tab){
    for (int i = 1; i < 6; i++){
        int j = i; // čast [0..., i-1] je zoradena
        int temp = tab[j];
        while((j>0) && (tab[j-1]>temp)){
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = temp;
    }
}

int main()
{
    int nums[] = {1,5,7,9,4,6};
    InsertSort(nums);
    //BubbleSort(nums);
    
    for(int i = 0; i < 6; i++){
        std::cout << nums[i] << ' ';
    }

    return 0;
}