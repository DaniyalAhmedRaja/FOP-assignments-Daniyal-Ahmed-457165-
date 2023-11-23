					//Question 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"Enter the number :  ";
//	cin>>num;
//	cout<<"The factors of "<<num<<" are : "<<endl;
//	for(int i=1;i<=num;++i){
//		if(num%i==0){
//			cout<<i<<"*"<<num/i<<endl;
//		}
//	}	
//	return 0;
//}
//___________________________________________________________________________________
					//Question 2
//#include <iostream>
//int main() {
// int x = 5;
// int y = 10;
// if (x == 5)
// if (y == 10)
// std::cout << "x is 5 and y is 10" << std::endl;
// else
// std::cout << "x is not 5" << std::endl;
// return 0;
//}
//______________________________________________________________________________________

					//Question 3
//#include <iostream>
//using namespace std;
//int main ()
//{
//	int num;
//	bool condition;
//	cout<<"Enter the number : ";
//	cin>>num;
//	if(num>10 && num<=20){
//		condition=true;
//	}
//	else{
//		condition==false;
//	}
//	cout<<condition;
//	
//	return 0;
//}
//_________________________________________________________________________________________
					//Question 4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num,i;
//	bool prime;
//	cout<<"Enter the number : ";
//	cin>>num;
//	cout<<"The largest prime number less than "<<num<<" is ";
//	while(num>=2){
//		i=2;
//		prime=false;
//		while(i<num){
//			if(num%i==0){
//				prime=true;
//				break;
//			}
//			++i;
//		}
//		if(prime==false){
//			cout<<num<<" .";
//			break;
//		}
//		--num;
//	}
//	
//	
//	return 0;
//}
//________________________________________________________________________________________
					//Question 5
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	string s1, s2;
//	int k;
//	cout<<"Input the first line of text: ";
//	getline(cin, s1);
//	cout<<"Input the second line of text: ";
//	getline(cin, s2);
//	if (s1==s2){
//		k=s1.length();
//		for (int i=0; i<k/2; i++){
//			swap(s2[i], s2[k-i-1]);
//		}
//	}
//	cout<<"The first sting is: \t"<<s1<<endl;
//	cout<<"The second srting is: \t"<<s2<<endl;
//	return 0;
//}
//____________________________________________________________________________________
					//Question 6
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num,div;
//	cout<<"Enter the dividand: ";
//	cin>>num;
//	cout<<"Enter the divisor: ";
//	cin>>div;
//	for(int Q=1;Q<=num;++Q){
//		if(num==Q*div){
//			cout<<num <<" / "<<div<<" = "<<Q;
//			break;
//		}
//	}
//	return 0;
//}
//_______________________________________________________________________________________
					//Question 7
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	string a;
//	int l;
//	cout<<"Enter your string : ";
//	getline(cin, a);
//	l= a.length();
//	for (int i=0; i<=l; i++){
//		for (int j=0; j<=l; j++){
//			if (tolower(a[i])==tolower(a[j]) && i!=j){
//				a.erase(j, 1);
//				j--;
//				l=a.length();
//			}
//		}
//	}
//	cout<<a;
//	return 0;
//}
//______________________________________________________________________________________
					//Question 8
//#include <iostream>
//using namespace std;
//int main(){
//	int arr[50]={1,2,3,4,5};
//	cout<<"Input digits into the array."<<endl;
//	cout<<"Enter 0 to stop the input stream and display the array."<<endl;
//	for (int i=5; i<=49; i++){
//		cin>>arr[i];
//		if (arr[i]==0){
//			break;
//		}
//	}
//	cout<<"The current values stored in the array are: \n";
//	for (int j=0; j<=49; j++){
//		if (arr[j]==0){
//		break;
//		}
//		cout<<arr[j]<<"\t";	
//	}
//	return 0;
//}

					//Question 9
//#include <iostream>
//using namespace std;
//int main(){
//	int length, arr[length], num, j, k, l;
//	bool condition=false;
//	cout<<"Input the length of the array: ";
//	cin>>length;
//	cout<<"Input the values in the array: \n";
//	for (int i=0; i<length; i++){
//		cin>> arr[i];
//	}
//	cout<<"Input a number: ";
//	cin>>num;
//	for(j=0; j<length; j++){
//		for(k=j+1; k<length; k++){
//			for (l=k+1; l<length; l++){
//				if (arr[j]+arr[k]+arr[l]==num){
//					condition=true;
//					break;
//				}
//			}
//		if(condition==true){
//			break;
//		}
//		}
//	if(condition==true){
//		break;
//	}
//	}
//	cout<<num<<" is the sum of "<<arr[j]<<"(Array's "<<j+1<<" value) ,"
//							    <<arr[k]<<"(Array's "<<k+1<<" value) & "
//							    <<arr[l]<<"(Array's "<<l+1<<" value)";
//	return 0; 
//}

					//Question 10
//#include <iostream>
//using namespace std;
//int main(){
//	int arr[6];
//	cout<<"Enter the six numbers in the array : \n";
//	for(int i=1;i<=6;++i){
//		cin>>arr[i];
//	}
//	for(int j=1;j<=6;++j){
//		for(int k=1;k<=6;++k){
//			if(arr[k]>arr[k+1]){
//				swap(arr[k],arr[k+1]);
//			}
//		}
//	}
//		cout<<"The values sorted in ascending order are : \n";
//	for(int a=1;a<=6;++a){
//		cout<<arr[a+1]<<endl;
//	}
//	return 0;
//}
