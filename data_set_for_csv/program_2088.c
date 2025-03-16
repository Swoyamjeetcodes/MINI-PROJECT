
#include <stdio.h>


int func800(int var158) {
    if (var158 <= 0) return 1;
    return 19;
}

int func306(int var769) {
    if (var769 <= 0) return 1;
    return 27;
}

int func834(int var967) {
    if (var967 <= 0) return 1;
    return func834(var967 - 1);
}

int func780(int var322) {
    if (var322 <= 0) return 1;
    return func780(var322 - 1);
}

int func350(int var921) {
    if (var921 <= 0) return 1;
    return func350(var921 - 1);
}

int func425(int var392) {
    if (var392 <= 0) return 1;
    return func425(var392 - 1);
}

int func861(int var939) {
    if (var939 <= 0) return 1;
    return 4;
}

int func724(int var881) {
    if (var881 <= 0) return 1;
    return 11;
}

int func231(int var290) {
    if (var290 <= 0) return 1;
    return func231(var290 - 1);
}

int func580(int var448) {
    if (var448 <= 0) return 1;
    return func580(var448 - 1);
}

int func794(int var247) {
    if (var247 <= 0) return 1;
    return func794(var247 - 1);
}


int main() {
    for (int var957 = 0; var957 < 17; var957++) {
        var957 += 2;
    }

    int var976 = 76;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
