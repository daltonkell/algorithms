#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
  return (x > 0) ? x : x * -1;
}

int pow(int base, int num) {
    if (num == 0){ return 1; }
    if (num == 1) { return base; }
    return pow(base, num - 1) * base;
}

int log(int base, int num) {
    if (num==1){
        return 0;
    }
    else{
        num /= base; // make new num
        return 1 + log(base, num); // 1 is always lowest
    }
}

int chartoint(char c) {
  int result = (int)c;
  result -= '0';
  return result;
}

char inttochar(int x) {
  return (char)(x + '0');
}

char chr(int x) {
  return (char)x;
}

int ord(char c) {
  return (int)c;
}

int max(int x, int y) {
  return (x > y) ? x : y;
}

int max(int x, int y, int z) {
  return max(x, max(y, z));
}

int min(int x, int y) {
  return (x < y) ? x : y;
}

int min(int x, int y, int z) {
  return min(x, min(y, z));
}

int round(double x, char c) {
  if (x > 0) {
    return (c == 'd') ? (int)x : (int)x + 1;
  } else {
    return (c == 'd') ? (int)x - 1 : (int)x;
  }
}

int max(int arr[], int n) {
  int max = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int min(int arr[], int n) {
  int min = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}

bool all(bool arr[], int n) {
    if (n==0) { return false; }
    else if (n==1) { return arr[0]; }
    else {
        return arr[0] && all(arr+1, n-1);
    }
}

bool any(bool arr[], int n) {
    if (n==0) { return false; }
    return arr[0] || any(arr+1, n-1);
}

int frequency(int arr[], int n, int x) {
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == x)
      count++;
  }
  return count;
}

long sum(int arr[], int n) {
    return (n==0) ? 0 : sum(arr, n-1) + arr[n-1];
}

int index(char str[], char substr[]) {
  int i = 0;
  int j = 0;
  while (str[i] != '\0') {
    if (substr[j] == '\0')
      return i - j;
    if (str[i] == substr[j])
      ++j;
    else
      j = 0;
    ++i;
  }
  if (substr[j] == '\0')
    return i - j;
  return -1;
}

bool is_sorted(int arr[], int n) {
  if (n <= 2)
    return true;
  else {
    int increasing = 1, decreasing = 1;
    for (int i = 0; i < (n - 1); ++i) {
      if (arr[i] <= arr[i + 1])
        ++increasing;

      if (arr[i] >= arr[i + 1])
        ++decreasing;
    }
    return (increasing == n || decreasing == n);
  }
}
