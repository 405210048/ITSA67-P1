#include<iostream>
//#include<fstream>
using namespace std;

int main(void)
{
    int i,a, flag=0, countt;
    int n[7], mark[3];
    countt=0;
    for(i=0; i<=6; i++)
        n[i]=0;
    mark[0]=mark[1]=mark[2]=0;
    while(cin>>a)
    {
        countt++;
        n[a]++;
        if(countt==4)//judge
        {
            countt=0;
            for(i=0; i<=6; i++)
            {
                if(n[i]==4)
                {
                    flag=1;
                    break;
                }
                else if(n[i]==2)
                {
                    flag=2;
                    mark[countt++]=i;
                }
            }
            if(flag==1)
            {
                cout<<"WIN"<<endl;
                flag=0;
            }
            else if(flag==2)
            {
                if(countt==1)
                {
                    cout<<2*mark[0]<<endl;
                    mark[0]=0;
                }
                else if(countt=2)
                {
                    if(mark[0]>=mark[1])
                        cout<<2*mark[0]<<endl;
                    else
                        cout<<2*mark[1]<<endl;
                }
                flag=0;countt=0;
            }
            else
            {
                cout<<"R"<<endl;
            }
            for(i=0;i<=6;i++)
                n[i]=0;
        }
    }
    return 0;
}

