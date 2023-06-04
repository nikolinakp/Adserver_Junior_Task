#include <iostream>
#include<algorithm>
using namespace std;

const int MAX_LEN_NUMS = 100000;
const int MAX_TARGET = 1000000000;
const int MIN_VALUE = 1;

void Pairs(int* nums, int len, int element, int& currIndex, int* result)
{
    int countElements = 0;
    
    // represents first pointer
    int i = 0;
    
    // represents second pointer
    int j = len - 1;

    while (i < j)
    {

        // If we find a pair
        if (nums[i] + nums[j] == element)
        {
            result[countElements++] = nums[i];
            result[countElements++] = nums[j];

            break;
        }

        /*If the sum of the elements at the current pointers is less than the searched sum, we move to larger values by moving the left pointer to the right*/
        else if (nums[i] + nums[j] < element)
        {
            i++;
        }
        /*If the sum of the elements at the current pointers is greater than the searched sum, we move to smaller values by moving the right pointer to the left*/
        else
        {
            j--;
        }

    }
    currIndex = countElements;
}

int main()
{
    int target;
    int countElementsInNums;
    cout << "Enter number of items in the list \n";
    cin >> countElementsInNums;

    if (countElementsInNums > MAX_LEN_NUMS || countElementsInNums < MIN_VALUE)
    {
        cout << "Too large number of items in list \n";
        return -1;
    }

    int* nums = new int[countElementsInNums];

    cout << "Enter the numbers in the list \n";
    for (size_t i = 0; i < countElementsInNums; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the selected search value \n";
    cin >> target;

    if (target > MAX_TARGET || target < MIN_VALUE)
    {
        cout << "The selected value is too large \n";
        return -1;
    }
    sort(nums, nums + countElementsInNums);

    int newLen;
    int* result = new int[countElementsInNums];
    Pairs(nums, countElementsInNums, target, newLen, result);
    if (newLen == 0)
    {
        cout << "None" << "\n";
    }
    else
    {
        for (size_t i = 0; i < newLen - 1; i += 2)
        {

            cout << '(' << result[i] << ',' << result[i + 1] << ')' << endl;
        }
    }

    delete[] nums;
    delete[] result;
    return 0;
}
