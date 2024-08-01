class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int a=0,b=1;
 int nextnum=a+b;
 
 for(int i=2 ; i<=n; i++){
    cout << a;
    nextnum=a+b;
    cout << nextnum;
    a=b;
    b=nextnum;
        
    }
    
    return b;
    }
    
    int main(){
        int n;
        cin >> n;
        int a=0,b=1;
      cout <<  fib(n);
        return 0;
    }
    
    
};