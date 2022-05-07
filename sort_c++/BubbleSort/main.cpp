#include <iostream>

void BubbleSort(int *tab){
    for (int i = 1; i < 6; i++){
        for(int j = 6-1; j >= i; j--){
            if (tab[j]<tab[j-1]){
                int tmp = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = tmp;
            }
        }
    }
}



int main()
{
    int nums[] = {1,5,7,9,4,6};
    BubbleSort(nums);
    
    for(int i = 0; i < 6; i++){
        std::cout << nums[i] << ' ';
    }

    return 0;
}