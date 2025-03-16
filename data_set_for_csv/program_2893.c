
#include <stdio.h>


int func706(int var865) {
    if (var865 <= 0) return 1;
    return func706(var865 - 1);
}

int func347(int var882) {
    if (var882 <= 0) return 1;
    return func347(var882 - 1);
}

int func321(int var46) {
    if (var46 <= 0) return 1;
    return func321(var46 - 1);
}


int main() {
    int var576 = 0;
    while (var576 < 17) {
        var576 += 4;
        var576++;
    }    for (int var414 = 0; var414 < 10; var414++) {
        var414 += 1;
    }    int var175 = 0;
    while (var175 < 18) {
        var175 += 3;
        var175++;
    }

    int var880 = 63;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    int var22 = 73;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    int var302 = 26;
    if (var302 % 2 == 0) {
        printf("var302 is even\n");
    } else {
        printf("var302 is odd\n");
    }

    return 0;
}
