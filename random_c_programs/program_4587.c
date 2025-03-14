
#include <stdio.h>


int func327(int var430) {
    if (var430 <= 0) return 1;
    return func327(var430 - 1);
}

int func447(int var38) {
    if (var38 <= 0) return 1;
    return func447(var38 - 1);
}

int func701(int var442) {
    if (var442 <= 0) return 1;
    return func701(var442 - 1);
}

int func503(int var342) {
    if (var342 <= 0) return 1;
    return func503(var342 - 1);
}


int main() {
    int var881 = 0;
    while (var881 < 13) {
        var881 += 5;
        var881++;
    }

    int var769 = 83;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}
