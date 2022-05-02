#include <iostream>

int Missing(int a[], int n){

  int total = ((n + 1) * (n + 2) / 2);

  for(int i = 0; i < n; i++){
    total -= a[i];
  }

  return total;

}

int main(){

  int arr[] = {1, 2, 3, 4, 5, 7};

  int n = sizeof(arr) / sizeof(arr[0]);

  int miss = Missing(arr, n);

  std::cout << "Missing number is: " << miss << "\n";

  return 0;

}