#include<stdio.h>
int main(){
    int hang,cot;
    printf("moi ban nhap so hang: ");
    scanf("%d",&hang);
    printf("moi ban nhap so cot: ");
    scanf("%d",&cot);
    int array[hang][cot];
    int array2[hang*cot];
    int count=0;
    for(int i=0;i<hang;i++){
    	for(int j=0;j<cot;j++){
		printf("moi ban nhap hang %d cot %d la: ",i+1,j+1);
		scanf("%d",&array[i][j]);
		array2[count++]=array[i][j];
		}
	}
	for(int i=0;i<hang*cot;i++){
		int minIndex=i;
		for(int j=i+1;j<hang*cot;j++){
			if(array2[minIndex]>array2[j]){
				minIndex=j;
			}
		}
		int temp=array2[minIndex];
		array2[minIndex]=array2[i];
		array2[i]=temp;
	}
	int count2=0;
	 for(int i=0;i<hang;i++){
    	for(int j=0;j<cot;j++){
		array[i][j]=array2[count2++];
		}
	}
    printf("\nphan tu da sap xep trong mang la:\n");
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
}
