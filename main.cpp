#include "LinkedList.h"
using std::cout;
using std::endl;

#define DEFAULT_SIZE 10

template <class T>
void swapArr(T &right, T &left)
{
    T temp = right;
    right = left;
    left = temp;
}
template <class T>
void initializeArray(T *&arr, size_t &size)
{
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size < 0 || size > 20)
    {
        cout << "Invalid size. Using default size: " << DEFAULT_SIZE << endl;
        size = DEFAULT_SIZE;
    }

    arr = new T[size];
}

template <class T>
void insertValues(T *&arr, size_t &size)
{
    size_t i = 0;
    for (; i < size; i++)
    {
        cout << "Enter the value for index [" << i << "]: ";
        cin >> arr[i];
    }
}

template <class T>
void bubbleSort(T *&arr, size_t &size)
{
    size_t i = 0;
    size_t j = 0;
    size_t iterations = 0;
    for (; i < size - 1; i++)
    {
        iterations++;
        for (; j < size - i - 1; j++)
        {
            iterations++;

            if (arr[j] > arr[j + 1])
            {
                swapArr(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Iterations : " << iterations << endl;
}

template <class T>
void printArray(T *&arr, size_t &size)
{
    cout << "Array elements: ";

    size_t i = 0;
    for (; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

template <typename T>
void selectionSort(T *&arr, size_t &size)
{
    size_t i = 0;
    size_t j = 0;
    for (; i < size - 1; i++)
    {
        size_t minIndex = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            swapArr(arr[i], arr[minIndex]);
        }
    }
}

template <class T>
LinkedList<int> &search(T arr[], const size_t size, T const searchTerm)
{
    LinkedList<int> *searchResults = new LinkedList<int>();
    int i = 0;
    for (; i < size; i++)
    {
        if (arr[i] == searchTerm)
        {
            searchResults->insert(i);
        }
    }
    return *searchResults;
}

template <class T>
void searchTerm(T *&arr, size_t size)
{
    T term;
    cout << "Enter the term you are searching for " << endl;
    cin >> term;
    LinkedList<int> result = search(arr, size, term);
    if (result.getCount() > 0)
    {
        cout << "the indecies the search term occured : " << endl;
        result.display();
        cout << "the total number of occurances is : " << result.getCount() << endl;
    }
    else
    {
        cout << "the search  Term " << term << " doesn't occure in the array List " << endl;
    }
}

template <class T>
void executeProgram(T *&arr, size_t &size)
{
    initializeArray(arr, size);
    insertValues(arr, size);
    searchTerm(arr, size);
    cout << "this is the size of the array " << size << endl;
    searchTerm(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
    delete[] arr;
}

int main()
{

    size_t size = 0;
    size_t choice = 0;

    bool execute = false;

    do
    {

        cout << "Select the type of array: " << endl;
        cout << "1. int\n2. double\n3. char\n4. float\n";
        cin >> choice;

        switch (choice)
        {
        case (1):
        {
            int *arr = nullptr;
            int term;
            executeProgram(arr, size);
            break;
        }
        case (2):
        {
            double *arr = nullptr;
            executeProgram(arr, size);

            break;
        }
        case (3):
        {
            char *arr = nullptr;
            executeProgram(arr, size);

            break;
        }
        case (4):
        {
            float *arr = nullptr;
            executeProgram(arr, size);
            break;
        }
        default:
            cout << "this is an invalid Choice " << endl;
            break;
        }

        cout << "do you want to run the program again \n 0: for no \n 1: for yes" << endl;
        cin >> execute;

    } while (execute);
    return 0;
}
