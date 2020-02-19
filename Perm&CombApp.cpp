#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

//Functions  used in the program for factorial, nCr, and nPr:

//1. Factorial function:
unsigned long long fact(unsigned long long k)
{
	unsigned long long i, fact;
	fact=1;
	if (k==0)
	{
		fact=1;
	}
	else
	{
		for (i=2; i<=k; i++)
		{
				fact=fact*i;
		}
    }
	return fact;
}

 
//2. Function for calculatiing nPr:
unsigned long long perm(unsigned long long n, unsigned long long r)
{
	unsigned long long ans;
	ans=1;
	for (unsigned long long i=n; i>(n-r); i--)
	{
		ans=ans*i;
	}
	return ans;
}


//3. Function for calculating nCr:
unsigned long long comb(unsigned long long n, unsigned long long r)
{
	unsigned long long num=1;
	for(unsigned long long i=n; i>(n-r); i--)
	{
		num=num*i;
	}
	unsigned long long ans=num/fact(r);
	return ans;
}


//Main code block:

int main()
{
	
	unsigned long long n,r,ans;
	string a;
	
	cout<<"How many distinct objects are present? ";
	cin>>n;
	if(n==0)
	{
		cout<<"Number of total objects cannot be zero.";
		exit(0);
	}
	
	cout<<"Do you want to only perform selection or selection and arrangment? Enter C for selection and P for selection and arrangement. ";
	cin>>a;
	
	cout<<"How many are to be selected/arranged out of the total objects? ";
	cin>>r;
	if (r<0 || r>n)
	{
		cout<<"The number of objects that are to be arranged out of the total objects can't be greater than the number of total objects or be less than 0";
		exit(0);
	}
	
	if (a=="C" || a=="c")
	{
		ans  = comb(n,r);
		cout<<"The number of ways of selecting "<<r<<" out of "<<n<<" distinct objects is: "<<ans<<endl;
		cout<<"Which means "<<n<<"C"<<r<<" = "<<ans;
		exit(0);
	}
	else
	{
		if(a=="P" || a=="p")
		{
			ans = perm(n,r);
			cout<<"The number of ways of selecting and arranging "<<r<<" objects out of "<<n<<" distinct objects is: "<<ans<<endl;
			cout<<"Which means "<<n<<"P"<<r<<" = "<<ans;
			exit(0);	
		}
		else 
		{
			cout<<"Your operation is invalid, select either C or P.";
			exit(0);
		}		
	}
	return 0;
}
	
	

