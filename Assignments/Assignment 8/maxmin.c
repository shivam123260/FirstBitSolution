void main(){
	int arr[]={10,30,45,35,2};
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<=4;i++){
		while(max<arr[i])
		max=arr[i];
		}
		for(int i=0;i<=4;i++){
			while(min>arr[i])
			min=arr[i];
		}
	printf("maximum number %d",max);
	printf("\nminimum number %d",min);
	
}