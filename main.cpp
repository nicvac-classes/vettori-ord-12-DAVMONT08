#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {
              time_t now=time(0);
              int N,i,j,t;
              cout<<"quante cifre ci sono?"<<endl;
              cin>>N;
              vector<int>r[N];
              for(i=0;i<N;i=i+1)
              {
              r[i]=random(11);
              }
              for(i=0;i<N;i=i+1)
              {
                j=0
                while(j<=N-2)
                {
                    if(r[j]>r[j+1])
                    {
                        t=r[j];
                        r[j]=r[j+1];
                        r[j+1]=t;

                    }
                  j=j+1
                }

              }

              j=0
              while(j<N)
              {
                cout<<"r[j]"<<endl;
                j=j+1

            
              }

             





















}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
