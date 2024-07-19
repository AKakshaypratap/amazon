int main(){
    int sp,cp;
    printf("enter cost price : ");
    scanf("%d",&cp);
    printf("enter selling price : ");
    scanf("%d",&sp);
    if (sp>cp){
        printf("the profit ");
    }
    else if (cp>sp){
        printf("loss");
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}