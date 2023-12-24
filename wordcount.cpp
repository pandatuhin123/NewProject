#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
std::string out;
std::string s="tuhin is awesome";

std::stringstream ss(s);
while(getline(ss,out,' '))
		{	
	cout<<out<<endl;
		}

}
