#include<cmath>
#include <cstdlib>  // Required for exit()
#include<iostream>
using namespace std;
// #include <iomanip>  // Include this library for fixed and setprecision
/*
    cout << fixed << setprecision(3) << d << "\n";  // Print float with 3 decimal places
    cout << fixed << setprecision(9) << e << "\n";  // Print double with 9 decimal places

// #include<bits/stdc++.h>  for include of all header files 


void bitcount(int a, int b){
    int count = 0;
    while (a!=0)
    {
        a=a&(a-1);
        count++;
    }
    while(b!=0){
        b = b&(b-1);
        count++;
    }
    printf("%d",count);
}

int fibonacci(int n,int a,int b){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        for(int i = 3; i<=n; i++){
            int nextnum = a+b;
            a=b;
            b=nextnum;
        }
        return b;
    }
}
*/

int main(){
    /*int a = 18;
    cout << "Mithra N Gowda " << a ;
    
   int a;
   a=cin.get();  for aschii value
   cout<<a;
   
   
   int a,b;
   cout<<"Enter two number:";
   cin>>a>>b;
   if(a>b){
    cout<<a<<" is greater than "<<b;
   }
   else if(a==b){
    cout<<"Both numbers are equal";
   }
   else{
    cout<<b<<" is greater than "<<a;
   }
   
  int n;
  int i=1;
  cin>>n;
  while(i<=n){
    cout<<i<<" ";
    i++;
  }

 int n;
 int i=2;        prime or not
 int result;
 cin>>n;
 result=sqrt(n);
 while(i<=result){
    if(n%i==0){
        cout<<n<<" is not prime";
        exit(1);
    }
    i++;
 }
 cout<<n<<" is a prime";
 
    int a;
    cin>>a;
    int i=0;
    while(i<a){             a*a '*' printing
        int j=0;
        while(j<a){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
    int a;
    cin>>a;              a*a number printing
    int i=1;
    while(i<=a){
        int j=0;
        while(j<a){
            cout<<i<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    

    int a;
    cin>>a;
    int i=1;
    while(i<=a){           
        int j=i;
        while(j<=a){
            cout<<i<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    output:
    5
    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4
    5
    
   int a =2;
   int b=a+1;
   if((a=3)==b){
    cout<<a;
   }
   cout<<a;
   

  int a;
   a=cin.get();  
   cout<<a;
    
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";   n-j+1(for printing in reverse order)
            j++;
        }
        cout<<endl;
        i++;
    }

    output:
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    
    int n;
    cin>>n;
    int j=1;
    int i=0;
    while(i<n){
        int m=0;
        while(m<n){
            cout<<j<<" ";
            j++;
            m++;
        }
        cout<<endl;
        i++;
    }

    output:
    2
    1 2
    3 4
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    output:
    5
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 

    int n;
    cin>>n;
    int row=1;
    char ch = 'A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        ch++;
        row++;
    }
    output:
    3
    A A A 
    B B B 
    C C C
    
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch = 'A'+n-row;
        while(col<=row){
            cout<<ch<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }
    output:
    5
    E
    D E
    C D E
    B C D E
    A B C D E
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // first triangle
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        // second triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //third triangle
        int third = i-1;
        while(third){
            cout<<third;
            third--;
        }
        i++;
        cout<<endl;
    } 
    output:
    5
        1
       121
      12321
     1234321
    123454321

    int n;
    cin >> n;  // Input the value of n (e.g., 5)
    
    int size = 2 * n - 1;  // Calculate the size of the matrix
    
    // Loop through each row
    for (int i = 0; i < size; i++) {
        // Loop through each column
        for (int j = 0; j < size; j++) {
            // Calculate the value based on the minimum distance from any edge
            int value = n - min(min(i, j), min(size - 1 - i, size - 1 - j));
            cout << value << " ";  // Print the value followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }
    
    int size = 2*n-1;
    int i=1;
    while(i<=size){
        int j=1;
        while(j<=size){
            int value = n - min(min(i,j),min(2*n-2-i,2*n-2-j));
            printf("%d",value);
            j++;
        }
        printf("\n");
        i++;
    }
    
    int n;
    cin>>n;
    int a=0,b=1;
    if(n==1){
        cout<<a<<endl;   fibonacci series
    }
    else if(n==2){
        cout<<a<<" "<<b<<endl;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
            int nextnumber = a+b;
            cout<<nextnumber<<" ";
            a=b;b=nextnumber;
        }
    }
    
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==4){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
    
    int n; // checking weather the number is power of 2
    cin>>n;
    if (n > 0 && (n & (n - 1)) == 0) {
        cout <<n<<" is power of 2";
    } else {
        cout <<n<<" is not power of 2";
    }
    
    int n;
    cin>>n;
    int x = n;
    int m =0 ;
    while(n!=0){
        m = m<<1 | 1;
        n = n>>1;
    }
    cout<<(m^x);
    
    while(1){
        int num =1;
        switch(num){
            case 1: cout<<"one"<<endl;
                    exit(1);
        }
    }
    
    int ammount;
    cin>>ammount;  gridy alog
    switch(1){
        case 1:{ int rs100 = ammount /100;
                ammount%=100;
                cout<<"100rs = "<<rs100<<endl;}
        
        case 2: {int rs50 = ammount /50;
                ammount%=50;
                cout<<"50rs = "<<rs50<<endl;}
        
        case 3: {int rs10 = ammount /20;
                ammount%=20;
                cout<<"20rs = "<<rs10<<endl;}
        
        case 4: cout<<"1rs = "<<ammount<<endl;
    }
    
    int a,b;
    cin>>a;
    cin>>b;

    bitcount(a,b);
    
    int n;
    cin>>n;
    int a=0,b=1;
    int ans = fibonacci(n,a,b);
    cout<<ans;
    */
    
    
}