
// swap the two number by using pointer

 #include<iostream>
 using namespace std;

int swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
  int main()
  {
    int a =5, b=10;
    cout<<a<< " " << b << endl;
      swap(&a,&b);
      cout<<a<<" "<<b<<endl;
  }

  /* 
  
  5 10
  10 5

 */