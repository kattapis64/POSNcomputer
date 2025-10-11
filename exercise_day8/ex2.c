#include"stdio.h"
typedef struct Product {
    char name[20];
    int price;
    int stock;
}Product;
int main() {
    Product arr[3];
    for (int i = 0;i < 3;i++) {
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].price);
        scanf("%d", &arr[i].stock);
    }

    for (int i = 0;i < 3;i++) {

        printf("%s\t", arr[i].name);
        printf("%d\t", arr[i].price);
        printf("%d\n", arr[i].stock);
    }
    return 0;
}