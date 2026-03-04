void main(){
	int arr[]={2,7,3,1,4};
	int n=4;
	int temp;
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
					
		}	
	}
	for(int i=0;i<n+1;i++)
	{
	
	
		printf("%d ",arr[i]);
	}
}