//Jashmeet Singh Lehal
//2010990421
//03
//q1


#include <iostream>
#include <algorithm>
using namespace std;
 

void findPair(int nums[], int n, int target)
{
    
    sort(nums, nums + n);
 
    
    int low = 0;
    int high = n - 1;
 
    
    
    
    while (low < high)
    {
        
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found (" << nums[low] << ", " << nums[high] << ")\n";
            return;
        }
 
        (nums[low] + nums[high] < target)? low++: high--;
    }
 
    
    
    
    cout << "Pair not found";
}
 
int main()
{
    int nums[] = {5,2,6,8,1,9 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);
 
    return 0;
}