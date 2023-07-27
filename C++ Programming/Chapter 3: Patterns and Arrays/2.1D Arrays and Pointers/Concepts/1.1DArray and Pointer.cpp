/**
 * @file Understanding Arrays with Pointers
 * @brief Accessing and traversing arrays using pointers,
 *        and understanding the difference between *ptr + 1 and *(ptr + 1).
 * @date 2023-06-27
 * @author Swayam Terode (swayamterodex@gmail.com)
 */

#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {21, 11, 12}; // Array declaration
    int *ptr = &arr[0];        // Pointer initialized with the address of the first element of arr

    cout << "ptr: " << ptr << endl;   // Print the memory address pointed by ptr
    cout << "&ptr: " << &ptr << endl; // Print the memory address of the ptr variable
    cout << "*ptr: " << *ptr << endl; // Print the value stored at the memory address pointed by ptr

    cout << "\nIterating through the array using pointers: ";
    for (int i = 0; i < 3; i++)
    {
        cout << *(ptr + i) << " "; // Print the value at each memory address accessed using ptr
    }

    cout << "\nIncrementing each element of the array by 1: ";
    for (int i = 0; i < 3; i++)
    {
        arr[i] = *(ptr + i) + 1; // Increment the value at each memory address accessed using ptr by 1
    }

    cout << "\nPrinting the updated array: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " "; // Print the updated values in the array
    }
    cout << "\n";

    cout << "\nDifference between *ptr + 1 and *(ptr + 1):\n";
    cout << "\nptr points to: " << *ptr << endl;    // Print the value pointed by ptr
    cout << "\n*ptr + 1: " << *ptr + 1;             // Perform *ptr + 1 operation
    cout << "\n*(ptr + 1): " << *(ptr + 1) << endl; // Access the next element using (ptr + 1)

    cout << "\n*(ptr + 0): " << *ptr + 0;           // Access the current element using (ptr + 0)
    cout << "\n(*ptr + 1): " << *(ptr + 1);         // Access the next element using (ptr + 1)
    cout << "\n(*ptr + 2): " << *(ptr + 2) << endl; // Access the next element using (ptr + 2)

    return 0;
}

/**
 * @brief Output of the Code:

ptr: 0x16d686e18
&ptr: 0x16d686e10
*ptr: 21

Iterating through the array using pointers: 21 11 12
Incrementing each element of the array by 1: 22 12 13

Printing the updated array: 22 12 13

Difference between *ptr + 1 and *(ptr + 1):

ptr points to: 22

*ptr + 1: 23
*(ptr + 1): 11

*(ptr + 0): 22
(*ptr + 1): 11
(*ptr + 2): 12
*/
