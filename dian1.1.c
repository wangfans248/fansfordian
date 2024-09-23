#include <stdio.h>

int main(void){
	char kind;
	int aisles;
	int price;
	int number;
	int n;
	printf("请输入摆放物品的种类、通道、价格以及数量\n");
	while (scanf(" %c %d %d %d",&kind,&aisles,&price,&number)){
	printf("%d: ",aisles);
	int i;
	for (i=0;i < number;i++){
		printf("%c",kind);
}       
        printf(" %d\n",price);
        int n;
	printf("输入1结束摆放，输入其他则继续\n");
	scanf("%d",&n);
	if (n==1){;
	break;
}
}
        return 0;
}

