// m and n range display prime number
# include <stdio.h>
 
int is_prime(int);
int main() {
    int m, n;
    printf("Enter two numbers : ");
    scanf("%d%d",&m,&n);

    for (int i = m; i <= n; i++){
        if (is_prime(i)) printf("%d\n",i);
    }

    return 0;
}

int is_prime(int num) {
    if (num < 2) return 0;
    else{
        int prime = 1;
        for (int j = 2; j < num/2 + 1; j++){
            if ((num % j) == 0) return 0;
        }
        return 1;
    }
    
}