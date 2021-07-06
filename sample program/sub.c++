#include<iostream>

using namespace std;

int main(){

    int n;

    cin>>n;

    string s[n];

    for(int i=0; i<n; i++){

        cin>>s[i];

    }

    for(int i = 0;i < n;i++)
	cout<<s[i]<<endl;

    int k = 0;

    for(int i=0; i<n; i++){

        if(s[i].find("ch") <= s[i].size()){

            k++;

        }

        else if(s[i].find("he") <= s[i].size()){

            k++;

        }

        else if(s[i].find("ef") <= s[i].size()){

            k++;

        }

    }

    cout<<k<<endl;

    return 0;

}
