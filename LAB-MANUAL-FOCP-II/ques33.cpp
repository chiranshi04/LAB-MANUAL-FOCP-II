 //largest and 2nd largest number
 #include<iostream>
 using namespace std;

 int main()
 {
    int arr[5];
 cout<<"enter the array number";

    for(int i=0;i<5;i++)
    cin>>arr[i];

    int largest= arr[0];
    int second_largest= arr[0];

    for(int i=1;i<5;i++)
    {
      
        if(arr[i]>largest)
    {    
        second_largest=largest;
     largest= arr[i];
    } 
     else if(arr[i]>second_largest)
     {
        arr[i]=second_largest;
     }

    }
    cout<<"largest number is="<<largest<<endl;
    cout<<"2nd largest is = "<<second_largest;
     return 0;
 }