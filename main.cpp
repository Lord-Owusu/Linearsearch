// linearsearch.cpp


#include <iostream>
using namespace std;


int linearSearch(int arrayElements[], int size, int searchValue)
{
    for(int i = 0; i < size; i++)
    {
        if (searchValue == arrayElements[i])
        {
            return i;
        }
    }

    return 0;
}

int main()
{
    int a[] = {12, 45, 1, 78, 96, 74, 6, 33, 16, 20, 10,45, 66, 40, 99};

    int value;

    cout << "Enter an integer value: " << endl;
    cin >> value;

    int result = linearSearch(a, 15, value);

    if(result >= 0)
    {
        cout << "The value " << a[result] << " that you entered was found at the"
                " element at position " << result + 1 << endl;
    }
    else
    {
        cout << "Unfortunately the number " << value << " was not found. " << endl;
    }


}
