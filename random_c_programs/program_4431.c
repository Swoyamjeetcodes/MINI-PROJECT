
#include <stdio.h>


int func990(int var229) {
    if (var229 <= 0) return 1;
    return func990(var229 - 1);
}

int func244(int var347) {
    if (var347 <= 0) return 1;
    return func244(var347 - 1);
}

int func953(int var908) {
    if (var908 <= 0) return 1;
    return func953(var908 - 1);
}

int func723(int var958) {
    if (var958 <= 0) return 1;
    return func723(var958 - 1);
}


int main() {
    int var442 = 0;
    while (var442 < 10) {
        var442 += 2;
        var442++;
    }    for (int var627 = 0; var627 < 20; var627++) {
        var627 += 4;
    }

    int var840 = 67;
    if (var840 % 2 == 0) {
        printf("var840 is even\n");
    } else {
        printf("var840 is odd\n");
    }

    return 0;
}
