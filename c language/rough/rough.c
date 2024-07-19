#include <stdio.h>

int main(void) {
	// your code goes here
    int city;
    scanf("%d",&city);
    printf("the visited cities %d",city);
    int remcity = 100-city;
    printf("\n%d",remcity);
}


#include <stdio.h>

int main(void) {
	// your code goes here
    int N;
    int X, Y; 
    int Ai; 
    long long total_cost = 0;
     scanf("%d", &N);
     scanf("%d", &X);
     scanf("%d", &Y);
     
     for (int i = 0; i < N; i++) {
        scanf("%d", &Ai);
        
        if(Ai < Y){
        Ai = X * Ai;
        }
        else{
            Ai = Y;
        }
        total_cost = total_cost + Ai;
    }
    printf("%d",total_cost);
}


