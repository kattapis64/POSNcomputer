#include "stdio.h"
#include "math.h"
int get_digits(int n) {
  int count = 0;
  while (n > 9) {
    n /= 10;
    count++;
  }
  return count + 1;
}
int main() {
  int value[2569];
  for (int i = 0;i < 2569;i++) {
    value[i] = 0;
  }
  for (int l = 2;l < 1001;l++) {
    int len1 = 5;
    int len2 = get_digits(l);
    int arr1[len1];
    int arr2[len2];

    int num = l;
    int k = get_digits(num);
    char arr[k];
    int rrr[k];
    sprintf(arr, "%d", num);
    for (int i = 0;i < k;i++) {
      arr2[i] = (int)arr[i] - '0';
      printf("%d ", arr2[i]);
    }

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
        }
        else {
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

        }
        else {

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
    printf("\n");
  }

  return 0;
}