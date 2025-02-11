#include <iostream>
#include <algorithm>
using namespace std;
int main () {
int arr1[10], arr2[10], merged[20];
int n1, n2;
cout << "Enter the number elements of array1 (max 10): ";
cin >> n1;
cout << "Enter elements of array1: ";
for ( int i = 0; i < n1; i++) {
cin >> arr1[i];
}
cout << "Enter number of elements for array2 (max 10): ";
cin >> n2;
cout << "Enter elements for array2: ";
for (int i = 0; i < n2; i++) {
cin >> arr2[i];
}
int total = n1 + n2;
for (int i = 0; i < n1; i++) {
merged[i] = arr1[i];
}
for (int i = 0; i < n2; i++) {
merged[n1 + i] = arr2[i];}
sort(merged, merged + total, greater<int>()); // for descending order sorting
cout << "Merged/Sorted array in descending order: ";
for (int i = 0; i < total; i++) {
cout << merged[i] << " ";
}
return 0;