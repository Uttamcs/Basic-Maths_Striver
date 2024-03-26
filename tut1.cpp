// // Extraction of digits


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=8451;
//     while (n > 0)
//     {
//         int rem  = n %10;
//         cout<<rem<<" ";
//         n =n /10;
//     }
    
//     return 0;
// }












// // Count no of digits

// Method - I


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 321632;
//     int count  = 0;
//     while (n > 0)
//     {
//         count++;
//         n= n/10;
//     }
//     cout<<count<<endl;
//     return  0;
// }







// // Method - II


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n  = 582;
//     // int count  = (int)(log10(n)+ 1);
//     int count  =ceil(log10(n));
//     cout<<count<<endl;
//     return 0;
// }










// // Reverse a Number
// #include<iostream>
// using namespace std;

// int main() {
// 	int n ;
// 	cin>>n;
// 	int revNum  = 0;
// 	while(n > 0)
// 	{
// 		int rem  =  n %10;
// 		revNum = (revNum * 10)+rem;
// 		n/= 10;
// 	}
// 	cout<<revNum<<endl;
// 	return  0;
// }







// // Check number is pallindrome or not


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
// 	int revNum  = 0;
//     int temp = n ; 
// 	while(n > 0)
// 	{
// 		int rem  =  n %10;
// 		revNum = (revNum * 10)+rem;
// 		n/= 10;
// 	}
// 	(revNum ==  temp) ? cout<<"true" :  cout<<"false"<<endl;
//     return  0;
// }














// // Check given number is Armstrong or not
// #include<bits/stdc++.h>
// using namespace std;

// bool checkArmstrong(int n){
// 	//Write your code here
// 	if(n== 0 || n == 1)
// 	{
// 		return true;
// 	}
// 	int temp = n;
// 	int sum = 0;
// 	int count = 0;
// 	while(n > 0)
// 	{
// 		count++;
// 		n/= 10;
// 	}
// 	n= temp;
// 	while(n  > 0)
// 	{
// 		int ld  = n % 10 ;
// 		sum = sum + pow(ld, count);
// 		n/=10;
// 	}
// 	return (temp == sum );
// }
// int main()
// {
//     int n  = 1634;
//     cout<<checkArmstrong(n)<<endl;
//     return 0;
// }










// // Find all divisors

// // Method - I

// #include<bits/stdc++.h>
// using namespace std;
// void printDivisors(int n)
// {
//     for (size_t i = 1; i <= n; i++)
//     {
//         if(n%i == 0)
//         {
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     int n = 36;
//     printDivisors(n);
//     return 0;
// }






// // Method - II


// #include<bits/stdc++.h>
// using namespace std;
// vector<int>res;
// void printDivisors(int n)
// {
//     for (size_t i = 1; i <= sqrt(n); i++)
//     {
//         if(n%i == 0)
//         {
//             res.push_back(i);
//             if((n/i) != i)
//             {
//                 res.push_back(n/i);
//             }
//         }
//     }
//     sort(res.begin(), res.end());
// }
// int main()
// {
//     int n = 36;
//     printDivisors(n);
//     for(int it:res)
//     {
//         cout<<it<<" ";
//     }
//     return 0;
// }








// // Check given number is prime or not

// // Method - I
// #include<iostream>
// using namespace std;

// int main() {
// 	// Write your code here
// 	int n;
// 	cin>>n;
// 	int count  = 0;
// 	for(int i=1; i*i <= n; i++)
// 	{
// 		if(n%i == 0)
// 		{
// 			count++;
// 			if((n/i) != i) count++;
// 		}
// 	}
// 	if(count == 2)
// 	{
// 		cout<<"true"<<endl;
// 	}
// 	else
// 	{
// 		cout<<"false"<<endl;
// 	}
	
// }










// // Method - II

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	int count  = 0;
// 	for(int i=1; i <= n; i++)
// 	{
// 		if(n%i == 0)
// 		{
// 			count++;
// 		}
// 	}
// 	if(count == 2)
// 	{
// 		cout<<"true"<<endl;
// 	}
// 	else
// 	{
// 		cout<<"false"<<endl;
// 	}
	
// }




// // To find GCD of two number

// // Method - I
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b)
// {
//     int res = 1;
//     for (size_t i = min(a,b); i > 0; i--)
//     {
//         if((a%i == 0) && (b%i == 0))
//         {
//             return i;
//         }
//     }
//     return res;
// }
// int main()
// {
//     int a= 10;
//     int b= 5;
//     cout<<gcd(a,b)<<endl;
//     return 0;
// }






// // Method - II
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b)
// {
// 	while(a>0 && b> 0)
// 	{
// 		if(a > b) a = a % b;
// 		else b = b%a;
// 	}
// 	if(a == 0) return b;
// 	return a;
// }
// int main()
// {
//     int a= 10;
//     int b= 5;
//     cout<<gcd(a,b)<<endl;
//     return 0;
// }