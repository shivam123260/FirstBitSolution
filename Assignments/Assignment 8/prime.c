void main(){
	int arr[5];
	int flag;
	printf("Enter array Element:\n");
	for(int i=0;i<=4;i++){
		scanf("%d",&arr[i]);
		if(arr[i] <= 1) 
		
            continue;
			
		
		flag=1;
	  for(int j=2;j<=arr[i];j++){
	  	if(arr[i]%j==0)
		  
	  	flag= 0;
	  	break;
	  	

	  }
	  if(flag==1)
	  printf("prime no is:%d\n",arr[i]);
	}
}
