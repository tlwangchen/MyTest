#include <iostream>
#include <string>
#include <map>

using namespace std;


void main()
{
	int i = 10;
	int num = 0;
	for(int j = 0 ; j > 5, j < i; ++j)
	{
		printf("%d::hello\n", ++num);
	}
}

// void main()
// {
// 	typedef map<char, int> myMap;
// 	myMap trans_map1;
// 
// 	char str[]="0123456789abcdefghijklmnopqrstuvwsyz";
// 
// 	for(int i=0 ; i < sizeof(str)/sizeof(str[0]); ++i)
// 	{
// 		trans_map1.insert(myMap::value_type(str[i], 0));
// 	}
// 
// 	char input[128]={0};
// 	cin>>input;
// 	myMap::iterator it;
// 
// 	for(int i = 0; input[i] != 0; ++i)
// 	{
// 		 it = trans_map1.find(input[i]);
// 		 if(it != trans_map1.end())
// 			(*it).second+=1;
// 	}
// 
// 	it = trans_map1.begin();
// 	cout<<"key"<<'\t'<<"value"<<endl;
// 	for(; it != trans_map1.end(); ++it)
// 	{
// 		if(it->second != 0)
// 			cout<<it->first<<'\t'<<it->second<<endl;
// 	}
// }

// void main()
// {
// 	char *str="abcdefghijklmnopqrstuvwsyz";
// 
// 	char *p = str,*q = str;
// 
// 	for(int i=0; i < 26; ++i)
// 	{
// 		if(*q!='z' && *q != 0)
// 		{
// 			for(int j=0; j < 13-i;++j)
// 			{
// 				printf(" ");
// 			}
// 			for(char *w = p; w <= q;++w)
// 			{
// 				cout<<*w;
// 			}
// 			cout<<endl;
// 			p++;
// 			q+=2;
// 		}
// 		else
// 		{
// 			for(int j=0; j < i-12;++j)
// 			{
// 				printf(" ");
// 			}
// 			for(char *w = p; w <= q;++w)
// 			{
// 				cout<<*w;
// 			}
// 			cout<<endl;
// 			p++;
// 		}
// 	}
// }