#include <iostream>

using namespace std;

void write_array(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}
void insertion_sort(int array[], int size) {
    int i, j, val;

    for (i = 1; i < size; i++) {
        val = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > val) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = val;

    }
}

int main() {
 int set[] = { 10, 1, 3, 7, 78, 2};
 insertion_sort(set, 6);
 write_array(set, 6);
}
