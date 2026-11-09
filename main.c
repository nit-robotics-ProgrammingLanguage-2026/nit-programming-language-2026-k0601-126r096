#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n<0){
    printf("NG/n");
    }else{
        int sum=0;

        for(int i=0;i<=n;i++){
            sum+=i;
        }
        printf("%d\n",sum);
    }
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    return 0;
}
