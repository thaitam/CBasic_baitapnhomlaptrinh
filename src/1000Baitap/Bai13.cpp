#include<stdio.h>
#include<math.h>
//bt13
int main (){
    int n;
    int x;
    float S  = 0;
    printf("nhap x: ");
    scanf("%d", &x);
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        S += pow (x, i*2);
    } 
    printf("S = %.5f", S);
    return 0;
}
