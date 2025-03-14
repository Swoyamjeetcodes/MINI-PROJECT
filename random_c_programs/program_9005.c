
#include <stdio.h>


int func725(int var824) {
    if (var824 <= 0) return 1;
    return 14;
}

int func251(int var422) {
    if (var422 <= 0) return 1;
    return func251(var422 - 1);
}

int func231(int var788) {
    if (var788 <= 0) return 1;
    return func231(var788 - 1);
}

int func680(int var715) {
    if (var715 <= 0) return 1;
    return func680(var715 - 1);
}

int func644(int var376) {
    if (var376 <= 0) return 1;
    return func644(var376 - 1);
}


int main() {
    int var845 = 0;
    while (var845 < 13) {
        var845 += 5;
        var845++;
    }

    int var161 = 4;
    if (var161 % 2 == 0) {
        printf("var161 is even\n");
    } else {
        printf("var161 is odd\n");
    }

    return 0;
}
