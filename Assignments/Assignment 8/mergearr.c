void main(){
	int arr[]= {1,2, 3, 4,5};
    int brr[]={10,20,30, 40, 50,70,80};
    int crr[12];
    for(int i=0;i<=4;i++){
    	crr[i]=arr[i];
    }
    for(int i=0;i<=6;i++){
	
    	crr[i+5]=brr[i];
}
	
	for(int i=0;i<=11;i++){
		printf("%d ",crr[i]);
	}
}