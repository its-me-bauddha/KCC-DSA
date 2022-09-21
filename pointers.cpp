# include<iostream>
using namespace std;
void ptr(int *a,int *b,int *c,int *d){
    *c = *a + *b;
    cout<<*c<<endl;
    
    if (*a>*b) {
        *d = *a -*b;
        cout<<*d;
        
    }
    else{
        *d = *b-*a;
        cout<<*d;
    }
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ptr(&a,&b,&c,&d);
    return 0;
    }