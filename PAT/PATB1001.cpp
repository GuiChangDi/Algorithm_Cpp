#include <cstdio>

//Callatz猜想实现 c version

void Callatz(){
    int step = 0, n;
    scanf_s("%d", &n);
    while( n != 1){
        if (n%2 == 0) {n /= 2; printf(" %d ",n);}
        else if (n%2 == 1)
            {n = (3*n+1) / 2; printf(" %d ",n);}
        step ++;
    }
    printf("Step: %d\n", step);
}

int main(){
    Callatz();
    return 0;
}