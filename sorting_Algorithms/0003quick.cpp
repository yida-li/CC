#include <iostream>
using namespace std;


int Partition(int numbers[], int i, int k) {
   int l;
   int h;
   int midpoint;
   int pivot;
   int temp;
   bool done;
   
   /* Pick middle element as pivot */
   midpoint = i + (k - i) / 2;
   pivot = numbers[midpoint];
   
   done = false;
   l = i;
   h = k;
   
   while (!done) {
      while (numbers[l] < pivot) {
         ++l;
      }
      
      while (pivot < numbers[h]) {
         --h;
      }

      if (l >= h) {
         done = true;
      }
      else {
         temp = numbers[l];
         numbers[l] = numbers[h];
         numbers[h] = temp;    
         ++l;
         --h;
      }
   }
   return h;
}

void Quicksort(int numbers[], int i, int k) {
   int j;
   
   /* Base case: If there are 1 or zero elements to sort,
    partition is already sorted */
   if (i >= k) {
      return;
   }
   
   /* Partition the data within the array. Value j returned
    from partitioning is location of last element in low partition. */
   j = Partition(numbers, i, k);
   
   /* Recursively sort low partition (i to j) and
    high partition (j + 1 to k) */
   Quicksort(numbers, i, j);
   Quicksort(numbers, j + 1, k);
}

int main() {
   int numbers[] = {122,21,21,21,19,18,122,16,17,21,21,122};
   const int NUMBERS_SIZE = 12;
   int i;
   
   cout << "UNSORTED: ";
   for(i = 0; i < NUMBERS_SIZE; ++i) {
      cout << numbers[i] << " ";
   }
   cout << endl;
   
   /* Initial call to quicksort */
   Quicksort(numbers, 0, NUMBERS_SIZE - 1);
   
   cout << "SORTED: ";
   for(i = 0; i < NUMBERS_SIZE; ++i) {
      cout << numbers[i] << " ";
   }
   cout << endl;
   
   return 0;
}