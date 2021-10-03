#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char x[27],y[100],ch='A',z[100];
    int i=0,j,p[100],enc[100],K,c=0,g,m=0,d[100],dec[100];
    for(i=0;i<26;i++)
    {
        x[i]=ch+i;

    }
    x[i]=' ';
    cout<< "Enter any plain text:";
    cin.getline(y,100);
    m=strlen(y);
    cout<< "Input the number of K:";
    cin>>K;
    i=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<27;j++)
        {
            if(y[i]==x[j])
            {
                p[c]=j;
                c++;
            }
        }
    }
    cout<< "After encrypting:"<<endl;
    for(i=0;i<c;i++)
    {
        enc[i]=(p[i]+K)%27;
        if(enc[i]<0)
        {
            enc[i]=enc[i]+27;
        }
        g=enc[i];
        cout<<x[g];
        z[i]=x[g];
    }
    c=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<27;j++)
        {
            if(z[i]==x[j])
            {
                d[c]=j;
                c++;
            }
        }
    }
    cout<<endl<< "After decrypting:"<<endl;
    for(i=0;i<c;i++)
    {
        dec[i]=(d[i]-K)%27;
        if(dec[i]<0)
        {
            dec[i]=dec[i]+27;
        }
        g=dec[i];
        cout<<x[g];
    }
    return 0;
}
