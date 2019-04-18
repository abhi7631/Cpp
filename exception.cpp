#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc,char **argv)
{
    int c;
    try
    {

        if(argc<3)
        {
            throw 1;
        }

        int a=atoi(argv[1]);
       int b=atoi(argv[2]);
       if(b==0)
       {
            throw "div by 0 exception";
       }
       c=a/b;
    }
    catch(const int x)
    {
        cout<<"not enough args"<<endl;
        exit(0);
    }
    catch(const char *x)
    {
        cout<<"div by 0 exception"<<endl;
        return(0);
    }
    cout<<"result = "<<c<<endl;
}
