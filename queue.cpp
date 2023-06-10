#include<iostream>

class queue{
    int fp=-1;
    int bp=-1;
    int n=100;
    int Q[100];
    public:

    void push(int x){
        if(bp==n-1){
            std::cout<<"Queue Overflow\n";
        }
        if(fp==-1){
            fp=0;
        }
          bp++;
        Q[bp]=x;
           
    }

    int pop(){
        if(fp==-1 || fp>bp){
            std::cout<<"Queue Underflow\n";
            return -1;
        }
        int x=Q[fp];
        fp++;
      if(fp>bp){
        fp=-1;
        bp=-1;
      }
      
        return x;
    }
void show(){
    if(fp == -1){
        std::cout << "Queue is empty\n";
        return;
    }
    for(int i=fp;i<=bp;i++){
        std::cout << Q[i] << " ";
    }
    std::cout << "\n";
}

};

int main(){
queue q;
q.push(2);
q.push(3);
  q.push(5);
q.show();
  q.pop();
  q.show();

    return 0;
}