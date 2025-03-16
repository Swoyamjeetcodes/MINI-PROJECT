
#include <stdio.h>


int func238(int var852) {
    if (var852 <= 0) return 1;
    return func238(var852 - 1);
}

int func864(int var248) {
    if (var248 <= 0) return 1;
    return func864(var248 - 1);
}

int func495(int var856) {
    if (var856 <= 0) return 1;
    return func495(var856 - 1);
}


int main() {
    int var801 = 0;
    while (var801 < 15) {
        var801 += 5;
        var801++;
    }    int var289 = 0;
    while (var289 < 9) {
        var289 += 4;
        var289++;
    }

    int var229 = 26;
    if (var229 % 2 == 0) {
        printf("var229 is even\n");
    } else {
        printf("var229 is odd\n");
    }

    int var909 = 17;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
