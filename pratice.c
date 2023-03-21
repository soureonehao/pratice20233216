#include<stdio.h>
void main() {
	int sum = 0, i = 1;	//定义总和初始化为零，定义递增变量
	printf("计算满足条件1^3 + 2^3 +3^3 +……+ n^3 < 1000的最大值\n");
	while (1) {
		sum += i * i * i;		//总和等于各i立方相加
		if (sum > 1000) {		//判断和否大于1000
			break;			
		}i++;
	}
	printf("满足条件的最大n值是%d", i - 1);
}