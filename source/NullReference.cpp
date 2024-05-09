#include<iostream>
#include<vector>

int main()
{
    //std::vector<int> a;
    int a[] = {3,1,0,0,98,0,-3,89,6,0,9,0,0,0,6};
      int num_elements =sizeof(a)/sizeof(a[0]);
      int populated = -1;
    for(int i=0;i<num_elements;i++)
    {
        if(a[i] !=0&&++populated<i){
            a[populated] =a[i] ;
            a[i]=0;
        }
    }
    for (auto &&i : a)
    {
        std::cout<<" "<<i;
    }
    
    return 0;
}