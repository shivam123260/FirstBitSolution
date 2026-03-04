void main(){
	int arr[]={10,20,30,40,50};
	int no,flag;
	printf("Enter the search element:");
	scanf("%d",&no);
	
	for(int i=0;i<=4;i++){
		if(no==arr[i]){
		
		printf("no is found \n",no);
		
		break;
		}
		
		else
		printf("no is not found \n",no);
		break;
	}
}