#include<iostream>
#include<conio.h>

using namespace std;

int main(void)
{
    float w10, w11, w12, b, t, s, e;
    int x0[4], x1[4], x2[4], ye[4], y[4], i;
    char st;
    cout<<"TWo-Input Logical Perceptron (TWILP): ---->(x0 is enable)"<<endl<<"Training:"<<endl;
    do
    {
    for(i=0;i<4;i++)
    {
          cout<<"Enter x0,x1,x2,ye for "<<i+1<<":";
          cin>>x0[i]>>x1[i]>>x2[i]>>ye[i];
          }
    cout<<"Enter bias:";
    cin>>b;
    cout<<"Enter threshold:";
    cin>>t;
    w10=w11=w12=0.1;
    int ecount=0;
          for(i=0;i<4;i++)
          {
              s=(w10*x0[i])+(w11*x1[i])+(w12*x2[i])+b;
              if(s>t)
                     y[i]=1;
              else
                     y[i]=0;
              e=ye[i]-y[i];
              if(e==0)
                ecount++;
              else
                  ecount--;
              w10=w10+(0.1*e*x0[i]);
              w11=w11+(0.1*e*x1[i]);
			  w12=w12+(0.1*e*x2[i]);
              if((i==3)&&(ecount<4))
                    i=-1;
              }
      cout<<"Weights fixed as:"<<endl;
      cout<<"w10="<<w10<<","<<"w11="<<w11<<","<<"w12="<<w12<<endl;
      cout<<"Check? [y/n]:";
      char ch;
      cin>>ch;
      while (ch!='n')
      {
            cout<<"Enter x0,x1,x2:";
            cin>>x0[0]>>x1[0]>>x2[0];
            s=(w10*x0[0])+(w11*x1[0])+(w12*x2[0])+b;
              if(s>t)
                     y[0]=1;
              else
                     y[0]=0;
            cout<<"Ouput:"<<y[0]<<endl;
            cout<<"Check again? [y/n]:";
            cin>>ch;
            }
      cout<<"Start over? [y/n]:";
      cin>>st;
      }while(st!='n');
      return 0;
}