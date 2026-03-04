void main(){
	int num=121,first,last;
	if(num>=100 && num<=999){
		first=num/100;
		last=num%10;
		if(first==last){
			printf("no is palindrome");
		}
		else{
			printf("no is not palindrome");
		}
		
		
	}
}