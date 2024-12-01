#include <bits/stdc++.h>
using namespace std;
//BUBBLE SORT
void bubble_sort(int numbers[], int &n)
{
	for (int a=n-1;a>0;a--){
        for (int b=0;b<a;b++){
            if (numbers[b]>numbers[b+1]){
                int c=numbers[b];
                numbers[b]=numbers[b+1];
                numbers[b+1]=c;
            }
        
            }
        }

}
//NHAP MANG
void input_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}
//IN MANG
void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}
//LENH CHINH
int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    
    input_array(numbers, n);
    bubble_sort(numbers, n);
    print_array(numbers, n);

    return 0;
}

