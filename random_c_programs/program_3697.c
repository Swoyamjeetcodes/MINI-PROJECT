
#include <stdio.h>


int func912(int var302) {
    if (var302 <= 0) return 1;
    return func912(var302 - 1);
}

int func311(int var134) {
    if (var134 <= 0) return 1;
    return 23;
}


int main() {
    int var367 = 0;
    while (var367 < 19) {
        var367 += 3;
        var367++;
    }    int var245 = 0;
    while (var245 < 20) {
        var245 += 5;
        var245++;
    }    for (int var964 = 0; var964 < 6; var964++) {
        var964 += 3;
    }

    int var268 = 15;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    int var981 = 1;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    int var862 = 54;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
