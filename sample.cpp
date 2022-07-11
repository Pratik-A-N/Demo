#include<iostream>

using namespace std;

int main(){



    string s;
    cin>>s;
    len = s.length();
    start = s[0];
    end = s[len-1];
    int j=1;
    while (start<=end)
    {
        if (a[start]!=a[end]){
            cout<<"NO";
            break;
        }
        start= s[j];
        end = s[n-1-j];
        j++;
    }
    
    // int t;
	// cin>>t;
	// for(int i=1;i<=t;i++){
	//     int n;
	//     cin>>n;
	//     int a[n];
	//     int p[100];
    //     for(int i=0;i<100;i++){
    //         p[i]=0;
    //     }
	//     for(int i=0;i<n;i++){
	//         cin>>a[i];
	        
	//     }
	//     for(int i=0;i<n;i++){
	//         int k= a[i];
	//         p[k]+=1;
	//     }
	//     int flag =1;
    //     // for(int i=1;i<=n;i++){
    //     //     cout<<p[i]<<" ";
    //     // }
	//     for(int i=0;i<=n;i++){
	//         if(p[i]==0){
	//             continue;
	//         }else if(p[i]!=i){
	//             flag =0;
	//         }
	//     }
	    
	//     if(flag==0){
	//         cout<<"NO"<<endl;
	//     }else{
	//         cout<<"YES"<<endl;
	//     }
    //     // cout<<endl;
	// }

    // string s,check="hackerrank",current;

    // cin>>s;
    
    // int len = s.length();
    
    
    // for(int i=0;i< len ;i++){
    //     if(s[i]=='h'){
    //         current[i]='h';
    //     }else if(s[i]=='a'){
    //         current[i] = 'a';
    //     }else if(s[i]=='c'){
    //         current[i] = 'c';
    //     }else if(s[i]=='k'){
    //         current[i] = 'k';
    //     }else if(s[i]=='e'){
    //         current[i] = 'e';
    //     }else if(s[i]=='r'){
    //         current[i] = 'r';
    //     }else if(s[i]=='r'){
    //         current[i] = 'r';
    //     }else if(s[i]=='a'){
    //         current[i] = 'a';
    //     }else if(s[i]=='n'){
    //         current[i] = 'n';
    //     }else if(s[i]=='k'){
    //         current[i] = 'k';
    //     }
        
    // }

    
    // cout<<check<<" "<<current;
    
    // if(check == current){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }










































    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int record =0;
    // int max_break =0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i==0)
    //     {
    //         if(a[i+1]<a[i]){
    //             record += 1;
    //             max_break=a[i];
    //         }else
    //         {
    //             max_break =a[i+1];
    //             record +=1;
    //         }
            
    //     }
        
    //     if ((a[i]>a[i+1])&&(a[i]>max_break))
    //     {
    //         record +=1;
    //         max_break = a[i];
    //     }

    //     if(i==n-1){
    //         if(a[i]>max_break){
    //             record +=1;
    //         }
    //     }
        
    // }
    
    // cout<<record<<endl;
    
    //    int  prevdf = a[1]-a[0];
    //    int  prevlength =2;
    //    int  max_length =2;
    // for (int i = 1; i < n; i++)
    // {
    //    int currentdf = a[i+1]-a[i];
    //     if(currentdf==prevdf){
    //         prevlength += 1;
    //         if(prevlength >max_length){
    //             max_length = prevlength;
    //             prevlength =2;
    //         }

    //     }else{
    //         prevdf = currentdf;
    //     }
    // }
    // cout<<max_length<<endl;
    return 0;
}
