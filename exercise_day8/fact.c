#include <stdio.h>
int main() {

  int len1 = 5;
  int len2 = 4;
  int arr1[5] = {1, 2, 4, 3, 2};
  int arr2[4] = {7, 3, 2, 1};
  int res[len1 + len2];
  int sum[len1 + len2];
  for (int i = 0; i < len1 + len2; i++) {
    res[i] = 0;
    sum[i] = 0;
  }
  int carry = 0;

  int temp = 0;
  int val;
  int data;
  int rem = 0;
  int old_rem;
  int w;
  for (int i = 0; i < len2; i++) {
    val = arr2[i];
    printf("Value is %d\n", arr2[i]);
    for (int j = i; j < len1 + i; j++) {
      data = arr1[j - i] * val;
      printf("data is %d and carry is %d\n", data, carry);

      if (data > 9) {
        sum[j] = data % 10 + carry;

        carry = data / 10;
        if (j == len1 + i - 1) {
          sum[j + 1] = carry;
        }
      } else {
        sum[j] = data + carry;

        carry = 0;
      }
      printf("Sum j is %d\n", sum[j]);
    }
    for (int k = 0; k < i; k++) {
      sum[k] = 0;
    }
    for (int i = 0; i < len1 + len2; i++) {
      if (res[i] + sum[i] > 9) {

        rem = (res[i] + sum[i]) / 10;
        res[i] = (res[i] + sum[i]) % 10 + old_rem;
        old_rem = rem;
        if (res[i] > 9) {
          w = res[i] / 10;
          res[i] = res[i] % 10;
          rem += w;
        }

      } else {

        res[i] += sum[i] + rem;
        rem = 0;
        if (res[i] > 9) {
          w = res[i] / 10;
          res[i] = res[i] % 10;
          rem += w;
        }
        old_rem = rem;
      }
      printf("%d\n", res[i]);
    }
    carry = 0;
  }
  return 0;
}